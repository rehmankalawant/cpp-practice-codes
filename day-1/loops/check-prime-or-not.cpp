//	21. Prime Number

//	Accept an integer and determine whether it is a prime number using a loop.

#include<iostream>

using namespace std;

void checkPrimeOrNot(int num) {

	int count = 0;

	for (int i = 1;i <= num;i++) {
		if (num % i == 0) {
			count++;
		}
	}
	if (count == 2) {
		cout << "The number " << num << " is Prime Number" << endl;
	}
	else {
		cout << "The number " << num << " is Not Prime Number" << endl;
	}
};

int main() {

	int number;

	//	3
	//	Check number prime or not

	cout << "Enter a number to check prime or not = ";
	cin >> number;

	checkPrimeOrNot(number);
}