#include "Library.h"
#include <iostream>

Library::Library() : numBooks(0), numBorrowers(0){}

void Library::addBook(const Book& book)
{
	if (numBooks < 5)
	{
		books[numBooks++] = book;
	}
	std::cout << "Add book with ID: " << book.getID() << "\nTitle: " << book.getTitle() << "Author: " << book.getAuthor() << std::endl;
}

void Library::addBorrower(const Borrower& borrower)
{
	if (numBorrowers < 2)
	{
		borrowers[numBorrowers++] = borrower;
	}
}

void Library::checkoutBook(int borrowerID, int bookID)
{
	if (borrowerID > 0 && borrowerID <= numBorrowers && bookID > 0 && bookID <= numBooks)
	{
		if (books[bookID - 1].isAvailable())
		{
			books[bookID - 1].checkout();
			borrowers[borrowerID - 1].borrowBook(bookID);
			std::cout << "Book " << bookID << " checked out by borrower " << borrowerID << std::endl;
		}
		else
		{
			std::cout << "Book " << bookID << " is not available for checkout." << std::endl;
		}
	}
	else
	{
		std::cout << "Invalid borrower or book ID." << std::endl;
	}
}


void Library::returnBook(int borrowerID, int bookID)
{
	if (borrowerID <= numBorrowers && bookID <= numBooks)
	{
		books[bookID - 1].checkin();
		borrowers[borrowerID - 1].returnBook(bookID);
	}
}

void Library::showBorrowerInfo(int borrowerID)
{
	if (borrowerID <= numBorrowers)
	{
		int* books = borrowers[borrowerID - 1].getBorrowedBooks();
		std::cout << "Borrower " << borrowerID << " has borrowed books: ";
		for (int i = 0; i < borrowers[borrowerID - 1].getNumBooks(); i++)
		{
			std::cout << books[i] << " ";
		}
		std::cout << std::endl;
	}
}

void Library::showLibrary()
{
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Add book with ID: " << this->books[i].getID() << "Title: " << this->books[i].getTitle() << " Author: " << this->books[i].getAuthor() << std::endl;
	}
}




