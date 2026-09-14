//	8. Simple Calculator

//	reate a menu - driven calculator using switch - case.The user should select addition, subtraction, multiplication, division, or modulus and enter two numbers .

#include<iostream>

using namespace std;

int main() {

	int num1, num2 , operation;

	cout << "Enter the num1 = ";
	cin >> num1;

	cout << "Enter the num2 = ";
	cin >> num2;

	cout << "\n Enter for operation \n 1. Addition,\n 2. Subtraction,\n 3. Multiplication,\n 4. Division, \n 5. Modulus (Remainder) "<<endl<<endl;
	cout << "Enter choice here = ";
	cin >> operation;

	switch (operation) {
	case 1: 
		cout << "Addition is " << num1 + num2 << endl;
		break;
	case 2: 
		cout << "Subtraction is " << num1 - num2 << endl;
		break;
	case 3: 
		cout << "Multiplication is " << num1 * num2 << endl;
		break;
	case 4: 
		cout << "Division is " << num1 / num2 << endl;
		break;
	case 5: 
		cout<<"Modulus (Remainder) is "<< num1 % num2 << endl;
		break;
	default:
		cout << "Invalid choice" << endl;

	}

	return 0;
	
}