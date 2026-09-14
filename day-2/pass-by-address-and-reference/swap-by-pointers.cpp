//	1. Write a function that accepts the addresses of two integers and swaps their values using pointers.

#include<iostream>

using namespace std;

void swapByPointers(int num1,int num2) {

	int* a;
	int* b;

	a = &num1;
	b = &num2;

	int* temp = a;
	a = b;
	b = temp;

	cout << "num1 = " << *a << " , " << "num2 = " << *b;

}

int main() {

	int number1, number2;

	cout << "Enter First Number = ";
	cin >> number1;

	cout << "Enter Second Number = ";
	cin >> number2;

	swapByPointers(number1, number2);

	return 0;
}