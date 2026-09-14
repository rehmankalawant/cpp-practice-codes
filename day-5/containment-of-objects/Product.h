#pragma once
#include<iostream>
#include<string>

using namespace std;

class Product {

private:
	int productId, productPrice, productQuantity;
	string productName;

public:
	Product() {
		productId = 0;
		productName = "";
		productPrice = 0;
		productQuantity = 0;
	}

	Product(int productId, string productName, int productPrice, int productQuantity) {
		this->productId = productId;
		this->productName = productName;
		this->productPrice = productPrice;
		this->productQuantity = productQuantity;
	}

	void accept() {
		cout << "Enter the product id = ";
		cin >> productId;
		cout << "Enter the product name = ";
		cin >> productName;
		cout << "Enter the product price = ";
		cin >> productPrice;
		cout << "Enter the product quantity = ";
		cin >> productQuantity;
	}

	void displayProducts() {
		cout << "Product Id = " << productId << endl;
		cout << "Product Name = " << productName << endl;
		cout << "Product Price = " << productPrice << endl;
		cout << "Product Quantity = " << productQuantity << endl;
	}

	int getTotalProductPrice() {
		return productPrice * productQuantity;
	}

};


