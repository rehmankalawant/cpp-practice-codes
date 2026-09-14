//	14. Sum of Natural Numbers

//	Accept N and calculate the sum of the first N natural numbers using a loop.

#include<iostream>

using namespace std;

void sumOfNaturalNumbers_For(int num) {
	int sum = 0;

	for (int i = 1;i <= num;i++) {
		//sum = sum + i;
		sum += i;
	}

	cout << "The sum upto " << num << " is " << sum <<endl;
}

void sumOfNaturalNumbers_While(int num) {

	int sum = 0;

	while (num > 0) {

		sum = sum + num;

		num--;
	}

	cout << "The sum upto " << num << " is " << sum << endl;
}

int main() {

	int number;

	cout << "Enter a number to calculate sum of natural number upto : ";
	cin >> number;

	cout << "Using For Loop"<<endl;
	sumOfNaturalNumbers_For(number);

	cout<<endl;

	cout << "Using While Loop"<<endl;
	sumOfNaturalNumbers_While(number);

	return 0;
}