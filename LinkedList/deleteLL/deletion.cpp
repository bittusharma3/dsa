#include <iostream>
using namespace std;

// Node structure
struct Node
{
    int data;
    Node *next;
};

void deleteFirst(Node *&head)
{
    if (head == nullptr)
        return;
    Node *temp = head;
    head = head->next;
    delete temp;
}

void deleteLast(Node *&head)
{
    if (head == nullptr)
        return;
    if (head->next == nullptr)
    {
        delete head;
        head = nullptr;
        return;
    }

    Node *temp = head;
    while (temp->next->next != nullptr)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
}

void deleteNode(Node *&head, int key)
{
    Node *temp = head;
    Node *prev = nullptr;

    if (temp != nullptr && temp->data == key)
    {
        head = temp->next;
        delete temp;
        return;
    }

    while (temp != nullptr && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }

    if (temp == nullptr)
        return; // Key not found

    prev->next = temp->next;
    delete temp;
}

void append(Node *&head, int new_data)
{
    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = nullptr;

    if (head == nullptr)
    {
        head = new_node;
        return;
    }

    Node *last = head;
    while (last->next != nullptr)
    {
        last = last->next;
    }

    last->next = new_node;
}

void printList(Node *node)
{
    while (node != nullptr)
    {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

int main()
{
    Node *head = nullptr;

    // Insert elements into the linked list
    append(head, 10);
    append(head, 20);
    append(head, 30);
    append(head, 40);

    cout << "Original Linked List: ";
    printList(head);

    // Delete first node
    deleteFirst(head);
    cout << "After Deleting First Node: ";
    printList(head);

    // Delete last node
    deleteLast(head);
    cout << "After Deleting Last Node: ";
    printList(head);

    // Delete specific node (e.g., node with value 20)
    deleteNode(head, 20);
    cout << "After Deleting Node with value 20: ";
    printList(head);

    return 0;
}

