//	1. Write a menu - driven C++ program to dynamically allocate an integer array of N elements and perform the following operations using user - defined functions :

//	a. Accept and display the array elements.
//	b. Find and display the largest and smallest elements.
//	c. Calculate and display the sum and average of the array elements.
//	e. Count and display the number of even and odd elements.
//	f. Search for a given element using linear search.
//	g. Exit the program.

#include<iostream>

using namespace std;

void acceptElements(int arr[], int noe) {

	for (int i = 0;i < noe; i++) {

		cout << "Enter the element " << i + 1 << " = ";

		cin >> arr[i];

	}
}

void displayElements(int arr[], int noe) {

	cout << "Array Elements Are = ";

	for (int i = 0;i < noe; i++) {

		cout << arr[i] << " ";

	}
	cout << endl;
}

void minMax(int arr[], int noe) {

	int minimum = arr[0];
	int maximum = arr[0];

	for (int i = 1;i < noe; i++) {
		if (arr[i] < minimum)
		{
			minimum = arr[i];
		}

		if (arr[i] > maximum)
		{
			maximum = arr[i];
		}

	}

	cout << "The Maximum Element is = " << maximum << endl;
	cout << "The Minimum Element is = " << minimum << endl;

}

void calculateAverage(int arr[], int noe) {

	int sum = 0;
	double average = 0.0;

	for (int i = 0;i < noe; i++) {
		sum += arr[i];
	}

	average = (sum) / noe;

	cout << "Average of Elements is " << average << endl;

}

void oddEven(int arr[], int noe) {

	int countOdd = 0, countEven = 0;

	for (int i = 0;i < noe; i++) {

		arr[i] % 2 == 0 ? countEven++ : countOdd++;

	}

	cout << "Number Odd Elements Are = " << countEven << endl;
	cout << "Number Odd Elements Are = " << countOdd << endl;

}

void searchElement(int arr[], int noe, int target) {

	int count = 0;

	for (int i = 0;i < noe; i++) {

		if (arr[i] == target) {
			count++;
		}
	}

	count == 1 ?
		(cout << "The target element found ! ! !" << endl) :
		(cout << "The target element not found ! ! !" << endl);

}

int main() {

	int choice;
	char proceedAgain;

	//	1 -- Dynamic Array Created

	int* arr;
	int noe;

	cout << "Enter the size of array = ";
	cin >> noe;

	//	new keyword allocate memory in heap and return the memory locations assigned
	//	so to store the location we must store the memory-locations(pointers) to a pointer-datatype

	arr = new int[noe];


	//	A.1 -- Accept Elements
	acceptElements(arr, noe);


	//	A.2 -- Accept Elements
	displayElements(arr, noe);

	cout << "==================================";

	do {
		cout << "Enter the operation to perform : ";
		cout << "\n 1. Show Largest And Smalles \n 2. Calculate the Average \n 3. Display Odd Even Count \n 4. Search Any Element" << endl;

		cin >> choice;

		switch (choice) {

		case 1:
			//	C -- Maximum Minimum In Array
			minMax(arr, noe);
			break;

		case 2:
			//	D -- Calculate Average Elements
			calculateAverage(arr, noe);
			break;

		case 3:
			//	E -- Odd Even Count
			oddEven(arr, noe);
			break;

		case 4:
			int searchNumber;

			cout << "Enter a number to search in array = ";
			cin >> searchNumber;

			//	F -- Linear Search
			searchElement(arr, noe, searchNumber);
			break;

		default:
			cout << "Invalid Operation" << endl;

		}

		cout << "Do you want to perform any other operation" << endl;

		//	G -- EXIT
		cout << "y | n" << endl;

		cin >> proceedAgain;

	} while (proceedAgain == 'y' || proceedAgain == 'Y');

	return 0;

}