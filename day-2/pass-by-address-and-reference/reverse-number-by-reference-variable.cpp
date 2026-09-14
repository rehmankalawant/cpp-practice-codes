//	4. Write a function using pass by reference to reverse the digits of a number and update the original variable in main.

#include<iostream>

using namespace std;

void reverseByReference(int& num) {

	int reverse=0, originalNumber = num;

	while (num > 0) {
		int digit = num % 10;

		reverse = reverse * 10 + digit;

		num /= 10;

	}

	cout << "The reverse of number " << originalNumber << " is " << reverse;

}

int main() {

	int numberInput;

	cout << "Enter the number to reverse = ";
	cin >> numberInput;

	reverseByReference(numberInput);

	return 0;
}