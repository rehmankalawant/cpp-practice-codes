#pragma once
#include"Book.h"

class BookActions {

public:
	static void allocate(Book*& bookArray, int noOfBooks) {
		bookArray = new Book[noOfBooks];

		cout << "ADD BOOKS"<<endl;

		for (int i = 0;i < noOfBooks;i++) {

			bookArray[i].insertBookRecord();

		}
		cout << endl;
	}

	static void displayAllBooks(Book*& bookArray, int noOfBooks) {

		cout << "DISPLAY ALL BOOKS";

		for (int i = 0;i < noOfBooks;i++) {

			bookArray[i].showBook();

		}
		cout << endl;
	}
};