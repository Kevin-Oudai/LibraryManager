#include "Borrower.h"
#include <iostream>
#include <algorithm>

Borrower::Borrower(int id, const std::string& borrowerName)
        : borrowerID(id), name(borrowerName), numBooks(0)
{
        std::cout << "ID: " << id << " Name: " << name << " created.\n";
}

// Store the ID of a book that this borrower has checked out.
void Borrower::borrowBook(int bookID)
{
        if (numBooks < 5)
        {
                borrowedBooks[numBooks++] = bookID;
        }
}

// Remove a book ID from the borrower's list of borrowed books.
void Borrower::returnBook(int bookID)
{
        int bookIndex = std::find(borrowedBooks, borrowedBooks + numBooks, bookID) - borrowedBooks;
        if (bookIndex < numBooks)
        {
                for (int i = bookIndex; i < numBooks - 1; i++)
                {
                        borrowedBooks[i] = borrowedBooks[i + 1];
                }
                borrowedBooks[numBooks - 1] = 0; // Clear the last element
                numBooks--;
        }
}

// Get the number of books currently borrowed.
int Borrower::getNumBooks()
{
        return numBooks;
}

// Get a pointer to the array of borrowed book IDs.
int* Borrower::getBorrowedBooks()
{
        return borrowedBooks;
}

// Retrieve the unique identifier for the borrower.
int Borrower::getID()
{
        return borrowerID;
}
