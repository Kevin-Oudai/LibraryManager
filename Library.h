#pragma once

#include "Book.h"
#include "Borrower.h"

/**
 * @brief Manages the collection of books and borrowers.
 */
class Library
{
private:
        Book books[5];       ///< Collection of books available in the library
        Borrower borrowers[2];///< Registered borrowers
        int numBooks;        ///< Current number of books stored
        int numBorrowers;    ///< Current number of borrowers registered

public:
        /**
         * @brief Construct an empty library with no books or borrowers.
         */
        Library();

        /**
         * @brief Add a book to the library's collection.
         * @param book Book to be added.
         */
        void addBook(const Book& book);

        /**
         * @brief Register a new borrower in the library.
         * @param borrower Borrower to be added.
         */
        void addBorrower(const Borrower& borrower);

        /**
         * @brief Checkout a book to a borrower if available.
         * @param borrowerID ID of the borrower.
         * @param bookID ID of the book to checkout.
         */
        void checkoutBook(int borrowerID, int bookID);

        /**
         * @brief Return a previously borrowed book.
         * @param borrowerID ID of the borrower.
         * @param bookID ID of the book to return.
         */
        void returnBook(int borrowerID, int bookID);

        /**
         * @brief Display books borrowed by a specific borrower.
         * @param borrowerID ID of the borrower whose information is shown.
         */
        void showBorrowerInfo(int borrowerID);

        /**
         * @brief Display all books currently in the library.
         */
        void showLibrary();
};

