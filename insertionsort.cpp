#include<iostream>
using namespace std;

int main(){
    int listofarray[8];
    cout << "Enter eight numbers :" ;
    for(int a = 0 ; a < 8; a++){
    cin >> listofarray[a];
    }
    cout <<"The numbers are >> " ;
    for(int a = 0 ; a < 8 ; a++) {
        cout << listofarray[a] << " | ";
    }
    cout << "\nSorting the array \n";
    for (int a  = 1 ; a < 8 ; a++){
        int num = listofarray[a];
        int b = a-1;
        while(b >= 0 && listofarray[b]> num)
        {
             listofarray[b+1] = listofarray[b];
             b = b-1;
        }
        listofarray[b+1]= num;
       }
       cout <<"\nAfter sorting the array are >> ";
       for (int a = 0 ; a<8 ; a++) {
           cout << listofarray[a] << " | ";
       }
}
