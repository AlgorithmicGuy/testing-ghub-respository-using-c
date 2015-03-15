//testing git respository
#include <iostream>
#include <string>
#include "Header.h"
using namespace std;
int main(){
		int a = 20;
		int b = 40;
		auto c = a;
		int result;
		b = b + a;
		result = b - c;
		string mystring;
		mystring = "This is just a normal calculation";
		cout << mystring << endl;
		cout << result << endl;
		string mystring2;
		const double pi = 3.14159;
		const char newline = '\n';
		double r = 5.0;
		double area_r = pow(r, 2);
		double circle;
		double area_circle;
		mystring2 = "Perimeter of a circle with 5cm radius";
		circle = 2 * pi * r;
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
		return 0;
}