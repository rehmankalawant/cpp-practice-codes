//	1. Positive, Negative or Zero

//	Write a program to accept an integer and determine whether it is positive, negative, or zero using if - else.

#include<iostream>

using namespace std;

void numberIs(int num) {
	if (num > 0) {
		cout << "The number " << num << " is positive";
	}
	else if (num < 0) {
		cout << "The number " << num << " is negative";
	}
	else if (num == 0) {
		cout << "The number " << num << " is zero";
	}
	else {
		cout << "The character " << num << " is invalid";
	}
}

int main() {
	int number;

	cout << "Enter a number = ";
	cin >> number;

	numberIs(number);

	return 0;

}