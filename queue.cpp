#include<iostream>
#include<queue>
using namespace std;

void printqueue(queue<int> queue){
    while(!queue.empty()){
        cout << queue.front() << " | ";
        queue.pop();
    }
}
void deletequeue(queue<int> queue){
    queue.pop();
    cout <<"\nThe new queue size is " << queue.size() << endl;
    while(!queue.empty()){
        cout << queue.front() <<" | ";
        queue.pop();
    }
}



int main (){
 queue<int> numberQueue;
numberQueue.push(24);
numberQueue.push(11);
numberQueue.push(16);
numberQueue.push(31);
numberQueue.push(21);
numberQueue.push(27);

cout << "The Size of queue is " << numberQueue.size(); 
cout <<"\nThe first element in the queue is " << numberQueue.front() <<endl;
cout <<"And the last is " << numberQueue.back() << endl;

printqueue(numberQueue);
deletequeue(numberQueue);
}
