//	11. Menu - Driven Area Calculator

//	Create a menu using switch - case to calculate the area of a circle, rectangle, square, or triangle based on the user's choice.

#include<iostream>

using namespace std;

void circleArea(int radius , double PI = 3.14) 
{
	double result = PI * (radius * radius);

	cout << "Circle Area is " << result << " square units"<<endl;
}

void rectangleArea(float length , float width) 
{
	double result = length * width;

	cout << "Rectangle Area is " << result << " square units" << endl;
}

void triangleArea(float base , float height)
{
	double result = 0.5 * (base * height);

	cout << "Triangle Area is " << result << " square units" << endl;
}

int main() {

	int choice;

	cout << "What you wanted to calculate" << endl;
	cout << "\n 1. Circle Area \n 2. Reactangle Area \n 3. Triangle Area \n"<<endl;

	cout << "choosen = ";
	cin >> choice;

	switch (choice) {
	case 1:
		int radius;

		cout << "Enter the radius = ";
		cin >> radius;

		circleArea(radius);

		break;

	case 2:
		float length, width;

		cout << "Enter the length = ";
		cin >> length;

		cout << "Enter the width = ";
		cin >> width;

		rectangleArea(length, width);

		break;

	case 3:
		float base, height;

		cout << "Enter the base = ";
		cin >> base;

		cout << "Enter the height = ";
		cin >> height;

		triangleArea(base, height);

		break;


	default:
		cout << "Invalid choice operation";
	}



	return 0;

}