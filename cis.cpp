#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

double findArearec (double x, double y)
{
	double q;
	q = x * y;
	return q;
}
double findAreacir(double x){
	double radsquared, total;
	total = 3.14 * x * x;
	return total;
	
}
double findAreatriangle(double x , double y){
		double areat;
		areat = x * y / 2;
		return areat;
}
	void recTangle();
	void circle();
	void triangle();
int main()
{	
	
	char choicesProgram = ' ';
	
	
	cout << "To start the program enter: " << endl;
	cout << endl;
	cout << "\t\t 1: To solve the area of a rectangle" << endl;
	cout << "\t\t 2: To solve the area of a circle" << endl;
	cout << "\t\t 3: To solve the area of a triangle" << endl;
	cout << "\t\t 0: To quit the program" << endl;
	cout << endl;
	cout << "Enter choice: ";
	cin >> choicesProgram;
	
	switch(choicesProgram)
	{
		case '1':
			system ("cls");
			cout << fixed << setprecision(2);
			recTangle();
		return 0;
		
		case '2':
			system("cls");
			circle();
		return 0;
		
		case '3':
			system("cls");
			triangle();
		return 0;
		
		case '0':
		break;
		 	
}
}
void recTangle()
{
  double wiD , leN , recArea ;
  cout << "Enter the length of rectangle: ";
  cin >> leN;
  cout << "Enter the width of rectangle: ";
  cin >> wiD;
  cout << "The area of the rectangle is: " << findArearec (leN, wiD);

}

void circle(){
	double radius;
	cout << "Enter the radius of circle: ";
	cin >> radius;
	cout << "The radius of the circle is " << findAreacir(radius);
}
void triangle(){
	double base, height;
	cout <<"Enter the base of triangle  ";
	cin >> base;
	cout <<"Enter the height of triangle ";
	cin >> height;
	cout <<"The area of trianlge is " << findAreatriangle(base, height);
}
