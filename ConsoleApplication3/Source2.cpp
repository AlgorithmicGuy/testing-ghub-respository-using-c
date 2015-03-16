#include <iostream>
#include <string>
#define NEWLINE '\n'
using namespace std;
//simple program to greet somone
void input(){
	cout << "Your name? ";
	string name;
	getline(cin, name);
	cout << NEWLINE;
	cout << "Hi " << name << ", nice to meet you. ";
	cout << NEWLINE;
	cout << name << " what's your favorite subject? ";
	string subject;
	getline(cin, subject);
	cout << NEWLINE;
	cout << "I like " << subject << " too. " << endl;
}