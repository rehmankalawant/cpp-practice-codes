//	17. Reverse a Number

//	Accept an integer and reverse its digits using a while loop.

#include<iostream>

using namespace std;

void reverseNumber_While(int num) {

	int reverse=0;
	int originalNum = num;

	while (num > 0) {

		// Extracted one digit
		int digit = num % 10;

		// Written formula
		reverse = reverse * 10 + digit;

		// Last digit get excluded for the next time
		num = num / 10;

	}

	cout << "The reverse of number " << originalNum << " is " << reverse <<endl<<endl;

}

void reverseNumber_For(int num) {

	int reverse=0;
	int originalNum = num;

	for (; num != 0; num = num / 10) {
		int digit = num % 10;
		reverse = reverse * 10 + digit;
	}

	cout << "The reverse of number " << originalNum << " is " << reverse << endl << endl;
}

int main() {

	int number;

	cout << "Enter a number to reverse it = ";
	cin >> number;

	cout << "Using While Loop" << endl;

	reverseNumber_While(number);

	cout << "Using For Loop" << endl;

	reverseNumber_For(number);

}