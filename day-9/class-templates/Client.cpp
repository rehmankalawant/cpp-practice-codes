#include<iostream>
#include<string>
using namespace std;

#include"SafeArray.h"
#include"Product.h"

int main()
{
	// SafeArray<int>
	SafeArray<int> intArray;

	intArray.push_back(10);
	intArray.push_back(20);
	intArray.push_back(30);

	cout << "\n\n SafeArray<int>";
	cout << "\n Size: " << intArray.size();
	cout << "\n Capacity: " << intArray.getCapacity();

	cout << "\n Element at index 1: " << intArray[1];

	// SafeArray<string>
	SafeArray<string> stringArray;

	stringArray.push_back("C++");
	stringArray.push_back("Java");
	stringArray.push_back("Python");

	cout << "\n\n SafeArray<string>";
	cout << "\n Size: " << stringArray.size();
	cout << "\n Capacity: " << stringArray.getCapacity();

	cout << "\n Element at index 0: " << stringArray[0];

	// SafeArray<Product>
	SafeArray<Product> productArray;

	cout << "\n\n SafeArray<Product> Initialized.";

	Product p1(101, "Mobile", 499.99);
	Product p2(102, "Tablet", 599.99);
	Product p3(103, "Laptop", 899.99);
	Product p4(104, "Monitor", 299.99);
	Product p5(105, "Keyboard", 79.99);

	productArray.push_back(p1);
	productArray.push_back(p2);
	productArray.push_back(p3);
	productArray.push_back(p4);
	productArray.push_back(p5);

	cout << "\n Pushed " << productArray.size()
		<< " items.";

	cout << "\n Element at index 2: ";
	productArray[2].display();

	try
	{
		cout << "\n\n Attempting access at index 10 -> ";
		productArray[10].display();
	}
	catch (out_of_range& ex)
	{
		cout << "Exception Caught: " << ex.what();
	}

	// Testing pop_back
	productArray.pop_back();

	cout << "\n\n After pop_back:";
	cout << "\n Size: " << productArray.size();
	cout << "\n Capacity: " << productArray.getCapacity();

	// Testing copy constructor
	SafeArray<Product> productArray2(productArray);

	cout << "\n\n Copy constructor tested.";
	cout << "\n Copied array size: " << productArray2.size();

	// Testing assignment operator
	SafeArray<Product> productArray3;
	productArray3 = productArray;

	cout << "\n Assignment operator tested.";
	cout << "\n Assigned array size: " << productArray3.size();

	return 0;
}