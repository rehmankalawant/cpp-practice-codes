#pragma once
#include"Product.h"
#include"Customer.h"

class Order {

private:
	int orderId;
	Product product;
	Customer customer;

public:
	Order(int orderId, int productId, string productName, int productPrice, int productQuantity, int customerId, string customerName, int contactNumber)
		: product(productId, productName, productPrice, productQuantity) ,
		customer(customerId, customerName, contactNumber) {

		this->orderId = orderId;

	}

	void display() {

		cout << "Order Id = " << orderId<<endl;
		product.displayProducts();
		customer.displayCustomers();

	}

	void displayTotalProductPrice() {
		cout << "Your total product price = " << product.getTotalProductPrice();
	}




};