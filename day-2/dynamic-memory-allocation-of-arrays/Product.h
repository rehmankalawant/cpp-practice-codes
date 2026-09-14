#pragma once
#include<iostream>
using namespace std;


class Product {
private:
	int pId;
	string pName;
	double pPrice;
	static double productAveragePrice;

public:
	Product() {
		pId = 0;
		pName = "";
		pPrice = 0;
	}
	
	void accept() {
		cout << "Enter the Product Id = ";
		cin >> pId;
		cout << "Enter the Product Name = ";
		cin >> pName;
		cout << "Enter the Product Price = ";
		cin >> pPrice;
		cout << endl;
	}

	void display(Product arr[], int nop) {
		for (int i = 0;i < nop;i++) {
			cout << "Product Id is :" << arr[i].pId << endl;
			cout << "Product Name is :" << arr[i].pName << endl;
			cout << "Product Price is :" << arr[i].pPrice << endl;
			cout << endl;
		}
	}
	
	void displayPrices(Product arr[],int nop) {
		for (int i = 0;i < nop;i++) {
			cout << "Price of  Products :" << arr[i].pPrice << endl;
			cout << endl;
		}
	}

	void minMaxProductsPrices(Product arr[], int nop) {

		double minimumPrices = arr[0].pPrice;
		double maximumPrices = arr[0].pPrice;

		for (int i = 1;i < nop; i++) {
			if (arr[i].pPrice < minimumPrices)
			{
				minimumPrices = arr[i].pPrice;
			}

			if (arr[i].pPrice > maximumPrices)
			{
				maximumPrices = arr[i].pPrice;
			}

		}

		cout << "The Maximum Prices is = " << maximumPrices << endl;
		cout << "The Minimum Prices is = " << minimumPrices << endl;

	}

	void totalInventoryValue(Product arr[], int nop) {

		double totalValue = 0;
		double averageOfProductPrice = 0;

		for (int i = 1;i < nop; i++) {

			totalValue = totalValue + arr[i].pPrice;

			averageOfProductPrice = (totalValue) / nop;

			Product::productAveragePrice = averageOfProductPrice;

		}

		cout << "The total inventory cost is " << totalValue << "/- RS";

	}

	void countProductsAboveBelowAveragePrice(Product arr[], int nop) {

		int countAbove = 0;
		int countBelow=0;

		for (int i = 1;i < nop; i++) {

			if (arr[i].pPrice > Product::productAveragePrice) {
				countAbove++;
			}


			if (arr[i].pPrice < Product::productAveragePrice) {
				countBelow++;
			}

			cout << "We Have " << countAbove << " Products Above Average Price"<<endl;
			cout << "We Have " << countBelow << " Products Below Average Price"<<endl;

		}

	}

	void searchProductWithPrice(Product arr[], int nop,int searchPrice) {

		for (int i = 0;i < nop;i++) {

			if (searchPrice == arr[i].pPrice) {
				cout << "The price matched with product : " << endl;
				arr[i].display(arr,nop);
				//return arr[i]; // if we take return type as Product //then only
			}
		}
	}

	void productsAfterDiscount(Product arr[],int nop) {

		float discount;

		cout << "Enter the discount in percentage = ";
		cin >> discount;

		for (int i = 0;i < nop;i++) {

			arr[i].pPrice = arr[i].pPrice * (discount / 100);
		
		}

		//	show updated objects

		cout << "ALL PRODUCTS " << endl;

		display(arr, nop);

	}

};

double Product::productAveragePrice = 0.0;