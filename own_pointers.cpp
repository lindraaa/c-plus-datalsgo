#include<iostream>
#include<array>
using namespace std;

int main(){
   // std :: array<int, 10> numbers ={ 1,2,3,4,5,6,7,8,9,10};
   // std :: cout << numbers[3] << endl;
   // std :: cout <<"The total number in the array is " << numbers.size();
    array<int, 6> numbers;
    cout <<"\n\n";
    for(int i= 1; i <= numbers.size(); i++){
        cout <<"Enter a number [" << i << "] ";
        cin >> numbers[i];
    }
    for(int x = 1; x <= numbers.size(); x++){
        cout <<"Num [" << x << "] " << numbers[x] <<"  ";
    }

    return 0;
}
