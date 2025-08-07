#include "Library.h"
#include <iostream>

Library::Library() : numBooks(0), numBorrowers(0) {}

// Add a book to the library if capacity allows and display its details.
void Library::addBook(const Book& book)
{
        if (numBooks < 5)
        {
                books[numBooks++] = book;
        }
        std::cout << "Added book with ID: " << book.getID() << "\nTitle: " << book.getTitle() << " Author: " << book.getAuthor() << std::endl;
}

// Register a new borrower if there is available space.
void Library::addBorrower(const Borrower& borrower)
{
        if (numBorrowers < 2)
        {
                borrowers[numBorrowers++] = borrower;
        }
}

// Checkout a book to a borrower if both IDs are valid and the book is available.
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

// Return a borrowed book to the library.
void Library::returnBook(int borrowerID, int bookID)
{
        if (borrowerID > 0 && borrowerID <= numBorrowers && bookID > 0 && bookID <= numBooks)
        {
                books[bookID - 1].checkin();
                borrowers[borrowerID - 1].returnBook(bookID);
        }
}

// Display information about books borrowed by a specific borrower.
void Library::showBorrowerInfo(int borrowerID)
{
        if (borrowerID > 0 && borrowerID <= numBorrowers)
        {
                int* borrowedBookIDs = borrowers[borrowerID - 1].getBorrowedBooks();
                std::cout << "Borrower " << borrowerID << " has borrowed books: ";
                for (int i = 0; i < borrowers[borrowerID - 1].getNumBooks(); i++)
                {
                        std::cout << borrowedBookIDs[i] << " ";
                }
                std::cout << std::endl;
        }
}

// Display all books currently added to the library.
void Library::showLibrary()
{
        for (int i = 0; i < numBooks; i++)
        {
                std::cout << "Book ID: " << books[i].getID() << " Title: " << books[i].getTitle() << " Author: " << books[i].getAuthor() << std::endl;
        }
}





