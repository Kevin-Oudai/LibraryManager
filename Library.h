#ifndef LIBRARY_H
#define LIBRARY_H

#include "Book.h"
#include "Borrower.h"

class Library
{
private:
	Book books[5];
	Borrower borrowers[2];
	int numBooks;
	int numBorrowers;

public:
	Library();
	void addBook(const Book& book);
	void addBorrower(const Borrower& borrower);
	void checkoutBook(int borrowerID, int bookID);
	void returnBook(int borrowerID, int bookID);
	void showBorrowerInfo(int borrowerID);
	void showLibrary();
};
#endif // !LIBRARY_H
