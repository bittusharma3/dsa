#include <iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
} Node;

Node *addFirstnode(Node *&head, int data)
{
    Node *temp = new Node;
    temp->data = data;
    if (head == NULL)
    {
        head = temp;
        head->next = NULL;
        // return head;
    }
    else
    {
        temp->next = head;
        head = temp;
    }
    return head;
}

Node *addlastnode(Node *head, int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->next = NULL;

    if (head == NULL)
    {
        return temp;
    }
    Node *current = head;
    while (current->next != NULL)
    {
        current = current->next;
    }
    current->next = temp;
    return head;
}

Node *insertAfterNode(Node *&prevNode, int data)
{
    if (prevNode == NULL)
    {
        printf("The given previous node cannot be NULL\n");
        return NULL;
    }
    Node *newNode = new Node; 
    newNode->data = data;   
    newNode->next = prevNode->next;
    prevNode->next = newNode;
    return newNode;

    // Node *newNode = createNode;
    // newNode->next = prevNode->next;
    // prevNode->next = newNode;
}

int length(Node *&head)
{
    Node *current = head;
    int count = 0;
    while (current != NULL)
    {
        count++;
        current = current->next;
    }
    return count;
}

int printll(Node *head)
{
    Node *current = head;
    int count = 0;
    while (current != NULL)
    {
        cout << current->data << "->";
        current = current->next;
        count++;
    }
    cout << "null" << endl;
    return count;
}

int main()
{
    Node *head = NULL;

    head = addFirstnode(head, 40);
    head = addFirstnode(head, 30);
    head = addFirstnode(head, 20);
    head = addFirstnode(head, 10);
    head = addlastnode(head, 50);
    head = addlastnode(head, 60);
    insertAfterNode(head->next, 15);

    printll(head);

    // length(head);
    cout << "length :  " << length(head) << endl;
    return 0;
}

/*
#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node
struct Node
{
    int data;
    struct Node *next;
};

// Function to create a new node
struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the beginning of the list
void insertAtBeginning(struct Node **head, int data)
{
    struct Node *newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}

// Function to insert a node at the end of the list
void insertAtEnd(struct Node **head, int data)
{
    struct Node *newNode = createNode(data);

    // If the list is empty, make the new node the head
    if (*head == NULL)
    {
        *head = newNode;
        return;
    }

    // Traverse to the end of the list
    struct Node *temp = *head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    // Insert the new node at the end
    temp->next = newNode;
}

// Function to insert a node after a given node
void insertAfterNode(struct Node *prevNode, int data)
{
    // Check if the previous node is NULL
    if (prevNode == NULL)
    {
        printf("The given previous node cannot be NULL\n");
        return;
    }

    struct Node *newNode = createNode(data);
    newNode->next = prevNode->next;
    prevNode->next = newNode;
}

// Function to print the linked list
void printList(struct Node *head)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
int length(Node *head)
{
    Node *current = head;
    int count = 0;
    while (current != NULL)
    {

        count++;
        current = current->next;
    }

    return count;
}

int main()
{
    struct Node *head = NULL;

    insertAtEnd(&head, 10);
    insertAtBeginning(&head, 5);
    insertAtEnd(&head, 20);
    insertAfterNode(head->next, 15); // Insert after the second node

    printList(head);
    length(head);
    printf("length");
    printf(" %d", length(head));

    return 0;
}






























#include <iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
} Node;

int printll(Node *head)
{
    Node *current = head;
    int count = 0;
    while (current != NULL)
    {
        cout << current->data << "->";
        current = current->next;
        count++;
    }
    cout << "null" << endl;
    return count;
}

int length(Node *&head)
{
    Node *current = head;
    int count = 0;
    while (current != NULL)
    {
        count++;
        current = current->next;
    }
    return count;
}

Node *addFirstnode(Node *&head, int data)
{
    Node *temp = new Node;
    temp->data = data;

    if (head == NULL) {
        head = temp;
        head->next = NULL;
    } else {
        temp->next = head;
        head = temp;
    }
    return head;
}

Node *addlastnode(Node *head, int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->next = NULL;

    if (head == NULL)
    {
        return temp;
    }

    Node *current = head;
    while (current->next != NULL)
    {
        current = current->next;
    }

    current->next = temp;
    return head;
}

int main()
{
    Node *head = NULL;  // Initialize head to NULL

    head = addlastnode(head, 50);
    head = addFirstnode(head, 40);
    head = addFirstnode(head, 10);
    head = addFirstnode(head, 20);
    head = addFirstnode(head, 30);
    head = addlastnode(head, 800);

    printll(head);

    cout << "length: " << length(head) << endl;

    return 0;
}
*/