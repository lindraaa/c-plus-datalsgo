#include <iostream>
using namespace std;

int main ()

{
	int luckynumbers[5];//={2,3,5,7,9};
	/*cout << luckynumbers[0] <<endl;
	cout << *(luckynumbers+ 2);*/
	
	for (int i = 0 ; i<=4; i++)
	{
		cout << "Number: ";
		cin >>luckynumbers[i];
	}
		for (int i = 0 ; i<=4; i++)
	{
		
		cout << *(luckynumbers+i) << " ";
 	}
		
}
