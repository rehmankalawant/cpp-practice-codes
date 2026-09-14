//	15. Multiplication Table

//	Accept a number and print its multiplication table from 1 to 10 using a loop.

#include<iostream>

using namespace std;

void multiplicationTable(int number) {

	cout << "Multiplication Table Of" << number << endl << endl;

	for (int i = 1;i <= 10;i++) {

		cout << number << " X " << i << " = ";
		cout << number * i;
		cout << endl;
	}
}

int main() {

	int number;

	cout << "Enter a number to have a multiplication table = ";
	cin >> number;

	multiplicationTable(number);

	return 0;
}

