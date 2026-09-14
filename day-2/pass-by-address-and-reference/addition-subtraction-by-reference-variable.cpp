//	3. Write a function using pass by reference to calculate the sum and difference of two numbers and return both results through reference parameters.

#include<iostream>;

using namespace std;

void addByReference(int& num1, int& num2) {

	cout << "The addition is " << num1 + num2 << endl;

}

void subByReference(int& num1, int& num2) {

	cout << "The subtraction is " << num1 - num2 << endl;

}

int main() {

	int number1, number2;

	cout << "Enter First Number = ";
	cin >> number1;

	cout << "Enter Second Number = ";
	cin >> number2;

	int& num1 = number1;
	int& num2 = number2;

	addByReference(num1, num2);
	subByReference(num1, num2);

}