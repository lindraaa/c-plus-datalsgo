#include<iostream>
#include<stack>


using namespace std;
 
void printStackelements(stack<int> stack){
  while(!stack.empty()){
      cout << stack.top() << " | ";
        stack.pop();
        
  }
}
void deletestackelemnts(stack<int> stack){
    stack.pop();
    cout <<"\nThe new stack size is " << stack.size() <<endl;
  while(!stack.empty()){
    cout << stack.top() <<" | ";
      stack.pop();
  }
}

int main()
{
    // empty , size, push, pop- means erase, top
    stack<int> numbersStack;
    numbersStack.push(24);
    numbersStack.push(11);
    numbersStack.push(16);
    numbersStack.push(31);
    numbersStack.push(21);
    numbersStack.push(27);
    
    if(numbersStack.empty()){
        cout <<"Stack is empty!! ";
    }
    else{
        cout <<"Stack is filled ";
    }

    cout <<"\nStack size is " << numbersStack.size()<<endl;
    
    printStackelements(numbersStack);
    deletestackelemnts(numbersStack);
     
}
