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