#include <iostream>
using namespace std;

int main(){
    string fn, age, gen;
    char again = ' ';
    home:
    cout <<"------------------------------" <<endl;
    cout <<"Enter Customer's Details " << endl;
    cout <<"------------------------------" <<endl;    
    
    cout <<"\nENTER FULLNAME: ";
    cin.ignore();
    getline(cin, fn);
    cout <<"\nENTER AGE: ";
    getline(cin, age);
    cout <<"\nENTER GENDER: ";
    getline(cin, gen);

    cout <<"\n------------------------------" <<endl;
    cout <<"Customer's Details "<< endl;
    cout <<"------------------------------" <<endl;
    
    cout <<"FULL NAME: " << fn <<endl;
    cout <<"AGE: " << age << endl;
    cout <<"GENDER: " << gen <<endl;

    cout <<"Do you want to continue? Type Y or y/ N or n: " ;
        cin >> again;
        while(again == 'Y' || again== 'y'){
            system("cls"); goto home;
        }
        cout <<"HI";
    return 0;

}
