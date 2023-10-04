#include <iostream>
using namespace std;

int main()
{
	float monthsarray [6]; //= {100,220,300,0,200,250}; 
	float total = 0;
	for(int i = 0; i <= 5; i++)
	{
		cout << "Enter amount for month " << i + 1 <<": "; 
		cin >> monthsarray[i];
			// other way 
	    total += monthsarray[i];
	}	

	float average = total/ 6;
	float totalinyrs = average*24;
	cout << "Total =  " << total ;
	cout << "\naverage =" << average;
	cout << "\nIn two years = " << totalinyrs;


	
}
