//	5. Grade Calculator

//	Accept marks obtained by a student and display the grade using the following criteria : 90–100 : A, 75–89 : B, 60–74 : C, 40–59 : D, below 40 : Fail.Validate marks outside 0–100.

#include<iostream>
#include<string>

using namespace std;

string calculateGrade(int percentage) {

	if (percentage > 90 && percentage >= 100) {
		return "A + ";
	}
	else if (percentage > 75 && percentage >= 89) {
		return "A";
	}
	else if (percentage > 60 && percentage >= 74) {
		return "A";
	}
	else if (percentage > 40 && percentage >= 59) {
		return "A";
	}
	else if (percentage < 40) {
		return "FAIL";
	}
	else {
		return "Invalid Percentage";
	}
}

int main() {

	int percentage;

	cout << "Enter the Percentage = ";
	cin >> percentage;

	string result = calculateGrade(percentage);

	cout << "The result is " << result;

	return 0;

}