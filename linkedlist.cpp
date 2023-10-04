#include<iostream>
using namespace std;

class Node{
public:
   int Value;
   struct Node* Next;

}*strnode;

void createnodelist(int n){
   class Node *fnNode, *tmp;
   int num;

   strnode = (class Node*)malloc(sizeof(class Node));
   if(strnode == NULL){
       cout << endl;
   }
   else{
       cout <<"Input data for node 1:  ";
       cin >> num;

       strnode->Value = num;
       strnode->Next = NULL;
       tmp = strnode;

       for(int i = 2; i <= n ; i++){
           fnNode = (class Node*)malloc(sizeof(class Node));
           if(fnNode==NULL){
               break;
           }
           else{
               cout <<"Input data for node " << i <<": ";
               cin >> num;
               fnNode->Value= num;
               fnNode->Next = NULL;
               tmp->Next = fnNode;
               tmp = tmp->Next;
           }
       }
   }
}
void displaylist(){
    class Node *tmp;
    if(strnode == NULL){
        cout <<endl;
    }
    else {
        tmp = strnode;
        while(tmp!= NULL){
            cout <<"Data = " << tmp->Value << endl;
            tmp = tmp->Next;
            
        }
    }
}
void insertnodeattheend(int num){
    class Node *fnNode, *tmp;
    fnNode = (class Node*)malloc(sizeof(class Node));
    if(fnNode == NULL){
        cout << endl;

    }
    else {
        fnNode->Value = num;
        fnNode->Next = NULL;
        tmp = strnode;
        while(tmp->Next != NULL)
            tmp = tmp->Next;
         tmp->Next = fnNode;
     }
}


int main(){
    int n, num;
    cout <<"Input the number of nodes: ";
    cin >> n;
    createnodelist(n);
    cout <<"\nData entered in the list are : " << endl;
    displaylist();

    cout <<"\nInput data to insert at the end of the list : ";
    cin >> num;
    
    cout << endl;

    insertnodeattheend(num);
    cout <<"Data, after insert in the list are : \n";
    displaylist();

   
}
