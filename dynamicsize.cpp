#include<iostream>
#include<vector>

using namespace std;

int main(){

	std::vector<int> data{1, 2, 3, 4};
	data.push_back(5);
	data.push_back(6);
	data.push_back(7);
	data.push_back(8);
	data.push_back(9);
	cout << "size = " << data.size();
 /* Adding the size is use the push_back function
  	and I use data.size to get the length of 
  	the array has been added*/

}
