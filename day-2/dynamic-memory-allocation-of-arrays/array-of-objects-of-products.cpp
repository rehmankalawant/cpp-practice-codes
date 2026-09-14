//	2. Write a menu - driven C++ program to dynamically allocate memory for the prices of N products in a store and perform the following operations using user - defined functions :

//	a. Accept and display the product prices.
//	b. Find and display the highest and lowest - priced products.
//	c. Calculate and display the total inventory value and average product price.
//	d. Count the number of products whose price is above and below the average price.
//	e. Search for a particular product price using linear search.
//	f. Apply a given discount percentage to all product prices and display the updated prices.
//	g. Exit the program

#include<iostream>
#include"ProductActions.h"

using namespace std;

int main() {

	int choice;
	char proceedAgain;

	//	a.Accept and display the product prices.

	//	We have taken Pointer to Product type of object
	//	Because we are going to get pointer to every attribute in object as soon as we create array of object using `new` and `Product[nop]`

	Product* productArray=NULL;
	int noOfProducts;

	cout << "\nEnter The Size Of Product Array = ";
	cin >> noOfProducts;

	Product product1;

	ProductActions::allocate(productArray, noOfProducts);

	cout << "\n\nProducts \n";

	productArray->display(productArray,noOfProducts);

	do {
		cout << "\nEnter Which Operation You Would Like To Perform\n";
		cout << "\n1.Find and display the highest and lowest - priced products.\n";
		cout << "\n2.Calculate and display the total inventory value and average product price.\n";
		cout << "\n3.Count the number of products whose price is above and below the average price.\n";
		cout << "\n4.Search for a particular product price using linear search.\n";
		cout << "\n5.Apply a given discount percentage to all product prices and display the updated prices.\n";
		cout << "\n6.Exit\n\n";

		cin >> choice;

		switch (choice) {

			//	b. Find and display the highest and lowest - priced products.
		case 1:
			cout << "\nHighest And Lowest Products Are\n";
			productArray->minMaxProductsPrices(productArray, noOfProducts);
			cout << endl;
			break;

		case 2:
			//	c.Calculate and display the total inventory value and average product price.
			cout << "\nTotal Inventory Value And Average Product Price\n";
			productArray->totalInventoryValue(productArray, noOfProducts);
			cout << endl;
			break;

		case 3:
			//	d.Count the number of products whose price is above and below the average price.
			cout << "\nProducts Whose Price Is Above And Below The Average Price\n";
			productArray->countProductsAboveBelowAveragePrice(productArray, noOfProducts);
			cout << endl;
			break;

		case 4:
			//	e.Search for a particular product price using linear search.
			int searchPrice;

			cout << "Enter a price to search = ";
			cin >> searchPrice;

			cout << "\nSearch For A Particular Product Price\n";
			productArray->searchProductWithPrice(productArray, noOfProducts, searchPrice);
			cout << endl;
			break;

		case 5:
			//	f.Apply a given discount percentage to all product prices and display the updated prices.
			
			// we already have in method
			//int discountPercentage;

			//cout << "How much discount should we apply (in percentage) = ";
			//cin >> discountPercentage;

			productArray->productsAfterDiscount(productArray, noOfProducts);
			cout << endl;
			break;

		case 6:
			return 0;
			break;

		default:cout << "\nInvalid choice\n";

		}

		cout << "\nDo You Want To Do Anything Else - y | n\n";
		cin >> proceedAgain;

	}
	while (proceedAgain == 'y' || proceedAgain == 'Y');


	return 0;

}