#include<iostream>
#include<array>
using namespace std;

int main(){
	std::array<int, 6> data{1, 2, 3, 4, 5, 6};
	int *pData = data.data();
	int x = *(pData+3);
	cout << x;
	
	/*std array use for assigning values at the time of 
	 declaration */

}
