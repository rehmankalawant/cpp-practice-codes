//	16. Factorial

//	Accept a positive integer and calculate its factorial using a loop.

#include<iostream>

using namespace std;

void calculateFactorial(int num) {

	int factorial = 1;

	for (int i = 1;i <= num;i++) {

		factorial = factorial * i;
	}

	cout << "The factorial of number " << num << " is " << factorial;

}

int main() {

	int number;

	cout << "Enter a number to find the factorial = ";
	cin >> number;

	calculateFactorial(number);
	
}