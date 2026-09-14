//	9. Month Name

//	Accept a number from 1 to 12 and display the corresponding month name using switch - case.

#include<iostream>

using namespace std;

void showMonthByNumber(int month) {

	switch (month) {
	case 1: 
		cout << "This is January" << endl;
		break;
	case 2: 
		cout << "This is February" << endl;
		break;
	case 3: 
		cout << "This is March" << endl;
		break;
	case 4: 
		cout << "This is April" << endl;
		break;
	case 5: 
		cout << "This is May" << endl;
		break;
	case 6: 
		cout << "This is June" << endl;
		break;
	case 7: 
		cout << "This is July" << endl;
		break;
	case 8: 
		cout << "This is August" << endl;
		break;
	case 9: 
		cout << "This is September" << endl;
		break;
	case 10: 
		cout << "This is October" << endl;
		break;
	case 11: 
		cout << "This is November" << endl;
		break;
	case 12: 
		cout << "This is December" << endl;
		break;
	}
}

int main() {

	int monthNumber;

	cout << "Enter the month number = ";
	cin >> monthNumber;

	showMonthByNumber(monthNumber);

	return 0;

}
