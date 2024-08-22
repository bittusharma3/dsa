#include <bits/stdc++.h>
using namespace std;

struct Node
{
    string word;
    Node *next;
};

void addWord(Node *&head, const string &word)
{
    Node *newNode = new Node();
    newNode->word = word;
    newNode->next = NULL;

    if (head == NULL)
    {

        head = newNode;
    }
    else
    {

        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

int printLL(Node *&head)
{
    Node *current = head;
    int count = 0;
    while (current != NULL)
    {
        cout << current->word << "->";
        current = current->next;
        count++;
    }
    cout << "end" << endl;
    return count;
}

int main()
{
    Node *head = NULL;

    addWord(head, "gays");
    addWord(head, "krlo");
    addWord(head, "assignment");
    addWord(head, "m3");
    printLL(head);
    cout << endl;

    return 0;
}
