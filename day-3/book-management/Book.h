#pragma once
#include<iostream>
#include<string>

using namespace std;

class Book {
private:
	int	bookID;
	string title, author;
	double price;

public:
	Book() {
		bookID = 0;
		title = "";
		author = "";
		price = 0.0;
	}

	void insertBookRecord() {
		cout << "Enter the Book Id = ";
		cin >> bookID;
		cout << "Enter the Book Title = ";
		cin >> title;
		cout << "Enter the Book Author = ";
		cin >> author;
		cout << "Enter the Book Price = ";
		cin >> price;
		cout << endl;
	}

	void showBook() {
		cout << "Book Id "<<bookID << endl;
		cout << "Enter the Book Title "<<title << endl;
		cout << "Enter the Book Author " << author << endl;
		cout << "Enter the Book Price = "<<price << endl;
		cout << endl;
	}

	void searchBookById(Book* book,int noOfBooks, int id) {
		for (int i = 0;i < noOfBooks;i++) {

			if (id == book[i].bookID) {
				book[i].showBook();
			}
		}
	}



};
