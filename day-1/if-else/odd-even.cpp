//	2. Even or Odd

//	Write a program to accept an integer and check whether the number is even or odd.

#include<iostream>
using namespace std;

void oddEven(int number) {

	if (number % 2 == 0) {
		cout << "The number "<<number<<" is Even";
	}
	else {
		cout << "The number " << number << " is Odd";
	}

}

int main() {
	int number;

	cout << "Enter a number = ";
	cin >> number;

	oddEven(number);

	return 0;

}