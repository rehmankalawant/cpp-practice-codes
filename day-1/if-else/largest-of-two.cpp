//	3. Largest of Two Numbers

//	Write a program to accept two integers and display the larger number.Also handle the case when both numbers are equal.

//	Question of if-else but used ternary-operator

#include<iostream>

using namespace std;

void largestOfNumbers(int num1,int num2 ) {
	num1 > num2 ? 
		cout << "The number " << num1 << " is larger than " << num2: 
		cout << "The number " << num2 << " is larger than " << num1;

}

int main() {
	int num1, num2;

	cout << "Enter the number 1 = ";
	cin >> num1;

	cout << "Enter the number 2 = ";
	cin >> num2;

	largestOfNumbers(num1, num2);

	return 0;

}

