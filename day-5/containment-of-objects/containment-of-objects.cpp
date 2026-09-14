//	1. Assignment Problem Statement-
//	Develop a C++ program for an Online Shopping Order Management System to demonstrate containment of objects.

//	Requirements-
//	• Create a class Customer with data members such as customerId, customerName, and contactNumber.
//	• Provide suitable constructors and member functions to initialize and display customer details.
//	• Create a class Product with data members such as productId, productName, price, and quantity.
//	• Provide suitable constructors and member functions to initialize and display product details.
//	• Create a class Order that contains objects of both Customer and Product classes.
//	• The Order class should also store an orderId.
//	• Use constructors to initialize the contained Customer and Product objects.
//	• Calculate and display the total order amount based on product price and quantity.
//	• Create at least three Order objects and display complete order details.

#include<iostream>
#include"Order.h"

using namespace std;

int main() {

	Order order1(1001, 501, "Wireless Mouse", 25, 2, 201, "Alice Johnson", 987654321);

	order1.display();
	order1.displayTotalProductPrice();
	cout << endl;
	cout << endl;

	Order order2(1002, 502, "Mechanical Keyboard", 85, 1, 202, "Bob Smith", 912345678);

	order2.display();
	order2.displayTotalProductPrice();
	cout << endl;
	cout << endl;

	Order order3(1003, 503, "USB-C Hub", 40, 3, 203, "Charlie Davis", 955512345);

	order3.display();
	order3.displayTotalProductPrice();
	cout << endl;
	cout << endl;

	return 0;

}