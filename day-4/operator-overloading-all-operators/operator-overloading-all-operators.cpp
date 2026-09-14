#include"Complex.h"

int main() {

	Complex comp1(2, 4);
	Complex comp2(4, 5);

	comp1.display();
	comp2.display();

	//	1
	//	comp3 = comp1 + comp2
	
	//	This compiling looks like
	//	comp1 --- this object
	//	comp2 --- parameter object
	//	comp1.operator+(comp2);

	Complex comp3 = comp1 + comp2;

	cout << "comp3 = comp1 + comp2"<<endl;
	comp3.display();

	//	2
	//	comp4 = comp1 - comp2
	//	This compiling looks like
	//	comp1 --- this object
	//	comp2 --- parameter object
	//	comp1.operator-(comp2);

	Complex comp4 = comp1 - comp2;

	cout << "comp4 = comp1 - comp2" << endl;
	comp4.display();

	//	3
	//	comp5 = comp1 * comp2
	//	This compiling looks like
	//	comp1 --- this object
	//	comp2 --- parameter object
	//	comp1.operator*(comp2);

	Complex comp5 = comp1 * comp2;

	cout << "comp5 = comp1 * comp2" << endl;
	comp5.display();

	//	4
	//	comp5 = comp1 / comp2
	//	This compiling looks like
	//	comp1 --- this object
	//	comp2 --- parameter object
	//	comp1.operator/(comp2);

	Complex comp6 = comp1 / comp2;

	cout << "comp6 = comp1 / comp2" << endl;
	comp6.display();

	//	5.1 - pre-increment
	//	++comp1
	//	This compiling looks like
	//	comp1 --- this object
	//	comp1.operator++();

	cout << "++comp1" << endl;
	++comp1;
	comp1.display();

	//	5.2 - post-increment
	//	comp2++
	//	This compiling looks like
	//	comp2 --- this object
	//	comp2.operator++(int dummy);

	cout << "comp2++" << endl;
	comp2++;
	comp2.display();

	//	6.1 - pre-decrement
	//	--comp1
	//	This compiling looks like
	//	comp1 --- this object
	//	comp1.operator--();

	cout << "--comp1" << endl;
	--comp1;
	comp1.display();

	//	6.2 - post-decrement
	//	comp2--
	//	This compiling looks like
	//	comp2 --- this object
	//	comp2.operator--(int dummy);

	cout << "comp2--" << endl;
	comp2--;
	comp2.display();


	//	7
	//	comp1 > comp2
	//	This compiling looks like
	//	comp1 --- this object
	//	comp2 --- parameter object
	//	comp1.operator--(comp2);

	cout << "comp2--" << endl;
	comp1 > comp2;


	//	8
	//	cout << comp1
	//	This compiling looks like
	//	cout -- this object --(type of ostream object)
	//	comp1 --- parameter object --(type of Complex object)
	//	cout.operator<<(comp1)
	//	For this you must aware about the friend-function so do that in that module after understanding


}