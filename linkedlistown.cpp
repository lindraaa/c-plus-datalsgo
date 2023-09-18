#include <iostream>
using namespace std;

class Node {
public:
    int Value;
    Node* Next;
};

void printlist(Node*n){
    while(n!=NULL){
        cout << n->Value << " | " ;
        n = n-> Next;
  }
}
void insertnewnode(Node**head, int newvalue ){
    Node * newnode = new Node();  
    newnode->Value = newvalue;

    newnode->Next =*head; 
    *head = newnode;

}
void insertattheend(Node**head, int newvalue){
    Node * newnode = new Node();
    newnode->Value = newvalue; 
    newnode->Next = NULL;
    if(*head==NULL){
        *head = newnode;
        return ;
    }   
    Node* last = *head;
    while(last->Next!= NULL){
        last = last->Next;
    }
    last->Next = newnode;

}
int main (){
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node(); 
    Node* fourth = new Node(); 
    Node* fifth = new Node();

    head->Value = 5;  
    head->Next = second;
    second->Value = 6;
    second->Next = third;
    third->Value = 7;
    third->Next = fourth;
    fourth->Value = 24;
    fourth->Next = fifth;
    fifth->Value = 31;
    fifth->Next = NULL; 
    
    //insertnewnode(&head, 88);
   // insertnewnode(&head, 48);
    insertattheend(&head, 100);
    printlist(head);

}
