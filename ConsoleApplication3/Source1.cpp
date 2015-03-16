#include <iostream>
#include <string>
using namespace std;
//testing multiple cpp files
void MyFunc(){
	string mystring;
	mystring = "Using multiple cpp files";
	int a, b = 3;
	a = b;
	a += 2;
	cout << mystring << endl;
	cout << a;
}