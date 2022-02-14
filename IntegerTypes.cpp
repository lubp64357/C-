//============================================================================
// Name        : IntegerTypes.cpp
// Author      : Ljubomir Iliev
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <limits>
using namespace std;

int main() {

	cout << INT32_MAX << endl;

	cout << INT32_MIN << endl;
	long lValue = 12312222222222222;
	cout << lValue << endl;

	short sValue = 23434;
	cout << sValue << endl;
	cout << "Size of int: " << sizeof(int) << endl;
	cout << "Size of short int: " << sizeof(short int) << endl;

	unsigned int uValue = 2343234; // only positive
	cout << uValue << endl;
	return 0;
}
