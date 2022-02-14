//============================================================================
// Name        : Strings.cpp
// Author      : Ljubomir Iliev
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

int main() {

	string text = "Hello this is a string.";

	string text1 = "Concatinate.";

	string txt = text + text1;

	cout << text << text1 << endl;

	cout << txt << endl;

	return 0;
}
