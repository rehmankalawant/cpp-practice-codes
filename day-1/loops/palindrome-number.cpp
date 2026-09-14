//	18. Palindrome Number

//	Accept an integer and determine whether it is a palindrome number.

#include<iostream>

using namespace std;

void checkPalindrome(int num) {

	int reverse = 0;
	int originalNum = num;

	while (num > 0) {

		int digit = num % 10;

		reverse = reverse * 10 + digit;

		num = num / 10;

	}

	if (originalNum == reverse) {
		cout << "The Number " << originalNum << " is Palindrome " << endl << endl;
	}
	else {
		cout << "The Number " << originalNum << " is Not Palindrome " << endl << endl;
	}

}

int main() {

	int number;

	cout << "Enter a number to check palindrome or not = ";
	cin >> number;

	checkPalindrome(number);

}