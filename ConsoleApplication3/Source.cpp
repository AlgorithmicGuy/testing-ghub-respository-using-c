//testing git respository
#include <iostream>
#include <string>
#include <sstream> 
#include "Header.h"
using namespace std;
int main(){
	//A simple code to find perimeter and area of a circle
		string mystring2;
		const double pi = 3.14159;
		const char newline = '\n';
		string r;
		int radius = 0;
		cout << "Radius of the circle? " << endl;
		getline(cin, r);
		stringstream(r) >> radius;
		double area_r = pow(radius, 2);
		double circle;
		double area_circle;
		mystring2 = "Perimeter of a circle with 5cm radius";
		circle = 2 * pi * radius;
		string mystring3;
		mystring3 = "Area of the same circle";
		area_circle = pi * area_r;
		cout << mystring2;
		cout << newline;
		cout << circle << endl;
		cout << mystring3;
		cout << newline;
		cout << area_circle << endl;
		cout << newline;
		MyFunc();
		cout << newline;
		input();
		cout << newline;
		//Another simple mathematical calculation to find the total price
		string mystring4 = "Price * quantity";
		cout << mystring4 << endl;
		cout << newline;
		string mystring5;
		float price = 0;
		int quantity = 0;
		cout << "Price of the item? "<< endl;
		getline(cin, mystring5);
		stringstream(mystring5) >> price;
		cout << "How many items? " << endl;
		getline(cin, mystring5);
		stringstream(mystring5) >> quantity;
		cout << "Total Price: " << price*quantity << endl;
		return 0;
}