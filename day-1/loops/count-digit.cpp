//	19. Count Digits

//	Accept an integer and count the number of digits using a loop.

#include<iostream>

using namespace std;

void countDigit(int num) {
	int count = 0;
	int originalDigit = num;

	while (num > 0) {
		num = num / 10;
		count++;
	}

	cout << "The Number " << originalDigit << " has " << count << " digit"<<endl;
}

int main() {

	int number;

	cout << "Enter a number to count the digit = ";
	cin >> number;

	countDigit(number);

}