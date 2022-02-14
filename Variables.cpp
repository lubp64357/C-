//============================================================================
// Name        : Variables.cpp
// Author      : Ljubomir Iliev
// Version     :
// Copyright   : Your copyright notice
// Description : Variables in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int numberCats = 5;
	int numberDogs = 5;
	int numAnimals = numberCats + numberDogs;

	cout << "Hello" << endl;

	cout << "Number of cats: " << numberCats << endl;

	cout << "Number of dogs + cats:" << numberCats + numberDogs << endl;

	cout << "Number of animals: " << numAnimals << endl;

	numberDogs = numberDogs + 1;

	cout << numberDogs << flush;

	return 0;
}
