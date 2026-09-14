#pragma once
#include<iostream>
#include<string>

using namespace std;

class Customer {
private:
	int customerId, contactNumber;
	string customerName;

public:
	Customer() {
		customerId = 0;
		customerName = "";
		contactNumber = 0;
	}

	Customer(int customerId,string customerName,int contactNumber) {
		this->customerId = customerId;
		this->customerName = customerName;
		this->contactNumber = contactNumber;
	}

	void accept() {
		cout << "Enter the customer id = ";
		cin >> customerId;
		cout << "Enter the customer name = ";
		cin >> customerName;
		cout << "Enter the customer contact no = ";
		cin >> contactNumber;
	}

	void displayCustomers() {
		cout << "Customer Id = "<< customerId << endl;
		cout << "Customer Name = "<< customerName << endl;
		cout << "Customer Contact-no = "<< contactNumber << endl;
	}

};
