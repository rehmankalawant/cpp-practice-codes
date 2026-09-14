//	4. Largest of Three Numbers

//	Write a program to accept three numbers and display the largest number using if - else statements.

//	Question of if-else but used ternary-operator

#include<iostream>

using namespace std;

void largestOfNumbers(int num1, int num2, int num3) {
	num1 > num2 ?
		(num1 > num3 ?
			cout << "The number " << num1 << " is larger": cout << "The number " << num3 << " is larger") :
		(num2 > num3 ?
			cout << "The number " << num2 << " is larger": cout << "The number " << num3 << " is larger");
}

int main() {
	int num1, num2,num3;

	cout << "Enter the number 1 = ";
	cin >> num1;

	cout << "Enter the number 2 = ";
	cin >> num2;

	cout << "Enter the number 3 = ";
	cin >> num3;

	largestOfNumbers(num1, num2,num3);

	return 0;

}

