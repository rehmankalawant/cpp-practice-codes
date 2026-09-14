//	2. Book Management
//	Create a Book class with book ID, title, author, and price.Use a constructor to initialize the data members.Store details of multiple books in an array of objects and search for a book using its ID

#include"BookActions.h"

int main() {
	Book* book;
	int noOfBooks,searchId;

	cout << "Enter how many record you want to add = ";
	cin >> noOfBooks;

	BookActions::allocate(book, noOfBooks);

	BookActions::displayAllBooks(book, noOfBooks);

	cout << "Enter a book id to search = ";
	cin >> searchId;

	book->searchBookById(book, noOfBooks, searchId);



}

