#pragma once
#include<iostream>
#include<string>
using namespace std;

class Product
{
private:
	int id;
	string name;
	double price;

public:
	Product()
	{
		id = 0;
		name = "";
		price = 0;
	}

	Product(int id, string name, double price)
	{
		this->id = id;
		this->name = name;
		this->price = price;
	}

	void display()
	{
		cout << "[ID: " << id;
		cout << ", Name: " << name;
		cout << ", Price: $" << price << "]";
	}
};