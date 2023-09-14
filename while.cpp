#include <iostream>
using namespace std;
#define MAX 100
int main(){
    string age, gen;
    char again = 'Y';
    char fn[MAX]={0};

	while (again == 'Y' || again== 'y')
	{
    system("cls");
    cout <<"------------------------------" <<endl;
    cout <<"Enter Customer's Details " << endl;
    cout <<"------------------------------" <<endl;    
    
    cout <<"\nENTER FULLNAME: ";
    cin.ignore();
    cin.getline(fn,MAX);
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
        
	}
    cout <<"\n------------------------------" <<endl;
    cout <<"Program Terminated! "<< endl;
    cout <<"------------------------------" <<endl;
    system("pause");

}
