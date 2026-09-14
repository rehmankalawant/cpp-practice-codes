//	1. Dynamic Integer Storage
//	Create a class Number that dynamically allocates memory for an integer using a pointer. Initialize the value using a constructor, implement a copy constructor to create a deep copy, and use a destructor to release the dynamically allocated memory.

#include"Number.h"

int main() {

	Number num1(10);

	Number num2(num1);

	// *num1 used like &num1 to extract value at memory location.

	cout << "The Number 1 is = " << *num1.getNumber();
	cout << endl;
	cout << "The Number 2 is = " << *num2.getNumber();

	return 0;
}