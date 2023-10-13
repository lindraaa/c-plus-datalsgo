#include <iostream>
using namespace std;


int main()
{
int num [5][5]={0};
 int r, c, f, k, a[100][100], b[100][100], sum[100][100], t, v;


cout << "Enter rows and columns for the first matrix: ";
cin >> r;
cin >> c;
cout << "Enter rows and columns for the second matrix: ";
cin >> f;
cin >> k;
cout << endl;

//entering data in 2D array
cout << "Enter element of matrix A: "<< endl;
for (t=0; t<r; ++t)//loop control for rows
	for (v=0; v<c; ++v)
	{
		cout << "Enter element a" << t + 1 << v + 1 << " : ";
		cin >> a[t][v];

	}
cout << endl;

cout << "Enter element of matrix B: "<< endl;
for (t=0; t<f; ++t)//loop control for rows
	for (v=0; v<k; ++v)
	{
		cout << "Enter element b" << t + 1 << v + 1 << " : ";
		cin >> b[t][v];

	}
system("cls");
cout <<"Matrix A: \n";
 for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << a[i][j] << "  ";
        }
        cout << endl;
    }
cout <<"Matrix B: \n";
 for (int i = 0; i < f; i++) {
        for (int j = 0; j < k; j++) {
            cout << b[i][j] << "  ";
        }
        cout << endl;
    }

for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

if( c == f ){
cout << "  =   " << endl;
     for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << sum[i][j] << "  ";
        }

        cout << endl;
    }
}
else{
cout << "  =   " << endl; 
cout <<"UNDEFINED!" <<endl;
}

	return 0;
}
