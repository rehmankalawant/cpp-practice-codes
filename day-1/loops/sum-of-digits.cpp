//	20. Sum of Digits

//	Accept an integer and calculate the sum of all its digits.

#include<iostream>

using namespace std;

void sumOfDigits(int num) {
	int sum = 0;
	int originalNumber = num;

	while (num > 0) {

		int digit = num % 10;

		sum += digit;	//	sum = sum + digit;

		num /= 10;	//	num = num / 10;
	}

	cout << "The Sum Of " << originalNumber << " is " << sum << endl;
}

int main() {

	int number;

	cout << "Enter a number to have sum of digits = ";
	cin >> number;

	sumOfDigits(number);

}