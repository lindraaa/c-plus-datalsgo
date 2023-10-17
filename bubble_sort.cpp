//bubble sorrting

#include <iostream>
using namespace std;

int main(){

    int listofarray[5];
    cout << "Enter five numbers :" << endl;
    for(int a = 0 ; a < 5; a++){
    cin >> listofarray[a];
    }
    cout <<"The numbers are >> " ;
    for(int a = 0 ; a < 5 ; a++) {
        cout << listofarray[a] << " | ";
    }
    cout << "\nSorting the array \n";
    for(int a = 0 ; a < 5 ; a++){
        for(int b = 0;  b < 5-a-1 ; b++){
            if(listofarray[b] > listofarray[b+1] ){
                 int swap = listofarray[b];
                 listofarray[b] = listofarray[b+1];
                 listofarray[b+1] = swap;

           
            }            
    }
    }
  
  cout <<"\nThe bubble sort of the array is >> " ;
    for(int a = 0; a < 5; a++){
        cout << listofarray[a] << " | " ;
    }

  
  
}
