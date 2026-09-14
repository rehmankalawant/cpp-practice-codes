//	13. Print Numbers

//	Write programs using for, while, and do - while loops to print numbers from 1 to N.

#include<iostream>

using namespace std;

void primeNumbers(int upto) {

	int count = 0;

	for (int i = 1;i <= upto;i++) {
		for (int j = 2;j < i;j++) {
			if (i % j == 0) {
				count++;
			}
		}
		if (count == 0) {
			cout << i << " ";
		}

		//	don't forget to reset the count to zero
		count = 0;
	}
	cout << endl;
}

void rangeOfPrimeNumbers(int from, int upto) {

	for (int i = from;i <= upto;i++) {

		int count = 0;

		for (int j = 2;j < i;j++) {
			if (i % j == 0) {
				count++;
			}
		}
		if (count == 0) {
			cout << i << " ";
		}

		//	don't forget to reset the count to zero
		count = 0;
	}
	cout << endl;
}

int main() {

	int startNumber, endNumber, number;

	// 1
	// Normal Prime Number series 

	cout << "Upto what you want prime numbers = ";
	cin >> endNumber;

	primeNumbers(endNumber);

	//	2
	//	Using Start Number to End Number

	cout << "Enter the Start Number = ";
	cin >> startNumber;

	cout << "Enter the End Number = ";
	cin >> endNumber;

	rangeOfPrimeNumbers(startNumber, endNumber);

	return 0;

}

