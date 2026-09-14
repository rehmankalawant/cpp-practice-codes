//	1. Complex Number Addition
//	Create a Complex class with real and imaginary data members.Initialize the complex numbers using appropriate constructors.Overload the '+' operator to add two Complex objects and display the resulting complex number.

#include"Complex.h"

int main() {

	Complex comp1(2, 4);
	Complex comp2(4, 5);

	comp1.display();
	comp2.display();

	//	This while compiling looks like
	//	comp1 --- this object
	//	comp2 --- parameter object
	//	comp1.operator+(comp2);

	Complex comp3 = comp1 + comp2;

	comp3.display();

}