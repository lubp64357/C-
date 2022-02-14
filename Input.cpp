//============================================================================
// Name        : Input.cpp
// Author      : Ljubomir Iliev
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	cout << "Enter your name : " << flush;
	string input;
	cin >> input;
	cout << "String you enetered: " << input << endl;

	cout << "Enter your value : " << flush;
	int value;
	cin >> value;
	cout << "Value: " << value << endl;

	return 0;
}
