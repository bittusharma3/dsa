#include <bits/stdc++.h>
using namespace std;
void selection_sort(int arr[], int n)
{
    // selection sort
    for (int i = 0; i < n - 1; i++)
    {
        int mini = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[mini])
            {
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
}
/*
int  selectionS(int arr[], int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        int mini = i;
        for (int j = i + 1; i < len; j++)
        {
            if (arr[j] < arr[mini])
            {
                mini = j ;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
}*/
void print(int arr[], int lnth)
{
    for (int i = 0; i < lnth; i++)
    {
        cout << arr[i];
    }
    cout << endl;
}
int main()
{
    int n = 5;
    int arry[n] = {6, 3, 8, 9, 1};
    print(arry, n);
    selection_sort(arry, n);
    print(arry, n);
}





/*  not a code of selection but a code of ll

#include<bits/stdc++.h>
#include<iostream >
using namespace std ;
typedef struct node{
    int data ;
    struct node *next ;
} Node ;
Node *addfirst( Node *& head , int data ){
    Node  *temp = new Node;
    temp->data = data ;
    if (head == NULL){
        head = temp;
        head->next=NULL;
        return head ;
    }
    else {
        temp ->next =head ;
        head = temp ;
        return head ;
    }
}

int lengthLL(Node *head){
    node *current = head ;
    int count =0;
    while (current != NULL){
        count ++;
        current =current -> next ;
    }
    return count ;
}

int  printLL(Node * head ){
    Node *current = head ;
   int  count = 0;
    while (current != NULL){
        cout << current ->data << " -> ";
        current = current->next ;
        count ++;
    }
    cout << "null"<<endl;
    return count  ;
}

int main(){
    Node *head = NULL;
    head =addfirst(head , 40);
    head = addfirst(head , 30);

    cout << "length "<< lengthLL(head)<<endl;
    cout << "print"<< printLL(head )<<endl;

}

*/