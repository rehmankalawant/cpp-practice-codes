//	6. Leap Year

//	Write a program to accept a year and determine whether it is a leap year.

#include<iostream>

using namespace std;

bool isLeapYear(int year) {
	if (year % 4 == 0) {

		return true;
	}
	return false;
}

int main() {

	int year;

	cout << "Enter year to check leap year or not = ";
	cin >> year;

	bool result = isLeapYear(year);

	result ? cout<<"Leap Year" : cout<<"Not A Leap Year";

	return 0;

}