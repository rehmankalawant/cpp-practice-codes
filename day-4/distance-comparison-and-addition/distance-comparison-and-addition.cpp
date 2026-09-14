//	2. Distance Comparison and Addition
//	Create a Distance class with feet and inches as data members.Use constructors to initializeDistance objects.Overload the '+' operator to add two Distance objects and overload the '==' operator to compare whether two Distance objects are equal.Display the appropriate results.
#include"Distance.h"

int main() {

	//	1. Add Objects

	Distance distance1(7 , 29.8);

	distance1.displayDistance();

	Distance distance2(9, 16.82);

	distance2.displayDistance();

	//	Addition of objects
	//	How it look in compiler
	// distance1.operator+(distance2) -- return temp-object
	//	distance1 -- this object
	//	distance2 -- parameter object

	Distance distance3 = distance1 + distance2;

	distance3.displayDistance();

	//	2. Compare Objects

	Distance distance4(7, 29.8);
	Distance distance5(7, 29.8);
	Distance distance6(8, 29.8);

	//	How compiler see this
	//	distance4 = distance5
	//	distance4.operator(distance5) -- return boolean

	cout << "\n\nComparing object distance4 with distance5 = ";
	distance4 == distance5;	//	true

	cout << "Comparing object distance4 with distance6 = ";
	distance4 == distance6;	//	false

}