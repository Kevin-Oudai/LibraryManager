#ifndef BORROWER_H
#define BORROWER_H

#include <string>

class Borrower
{
private:
	std::string name;
	int borrowerID;
	int borrowedBooks[5];
	int numBooks;

public:
	Borrower() : borrowerID(0), name(""), numBooks(0) {} // Default constructor
	Borrower(int id, const std::string& name);
	void borrowBook(int bookID);
	void returnBook(int bookID);
	int getNumBooks();
	int* getBorrowedBooks();
	int getID();
};

#endif