#include "Borrower.h"
#include <iostream>

Borrower::Borrower(int id, const std::string& n)
	:borrowerID(id), name(n), numBooks(0)
{
	std::cout << "ID: " << id << "Name: " << name << " created.\n";
}

void Borrower::borrowBook(int bookID)
{
	if (numBooks < 5)
	{
		borrowedBooks[numBooks++] = bookID;
	}
}

void Borrower::returnBook(int bookID)
{
	int index = std::find(borrowedBooks, borrowedBooks + numBooks, bookID) - borrowedBooks;
	if (index < numBooks)
	{
		for (int i = index; i < numBooks - 1; i++)
		{
			borrowedBooks[i] = borrowedBooks[i + 1];
		}
		borrowedBooks[numBooks - 1] = 0; // Clear the last element
		numBooks--;
	}
}

int Borrower::getNumBooks()
{
	return this->numBooks;
}

int* Borrower::getBorrowedBooks()
{
	return borrowedBooks;
}

int Borrower::getID()
{
	return this->borrowerID;
}
