//Roc Coughlin
//This is my own Work
//In Class Exercise 1/8/2020
#include<iostream>
using namespace std;
int main()
{
	int pounds;
	cout << "please enter a number in pounds: ";
	cin >> pounds;
	cout << "the value in kilograms is " << pounds * 0.454 << ".\n";
	
	int side;
	cout << "please enter the length of a side of a hexagon: ";
	cin >> side;
	float area = side * side * 3 * sqrt(3) * .5;
	cout << "The aria of the hexagon is " << area << "\n";

	int a;
	int b;
	cout << "please enter a number: ";
	cin >> a;
	cout << "please enter a second number: ";
	cin >> b;
	if (a > b) {
		cout << a << " is biger then " << b << "\n";
	}
	else
	{
		cout << b << " is bigger then " << a << "\n";
	}
		return 0;
}