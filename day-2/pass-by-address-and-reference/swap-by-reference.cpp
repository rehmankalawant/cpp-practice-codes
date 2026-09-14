//	2. Write a function that accepts two integers using pass by reference and swaps their values.

#include<iostream>

using namespace std;

//	this is also allowed because the reference variable does not have datatype
//void swapByReference(int num1, int num2) {

	void swapByReference(int &num1 , int &num2) {
	int temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "num1 is : " << num1 << " || " << " num2 is : " << num2;

}



int main() {

	int number1, number2;

	cout << "Enter First Number = ";
	cin >> number1;

	cout << "Enter Second Number = ";
	cin >> number2;

	int& num1 = number1;
	int& num2 = number2;

	swapByReference(num1, num2);


	return 0;
}