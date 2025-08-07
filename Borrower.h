#pragma once

#include <string>

/**
 * @brief Represents a person who can borrow books from the library.
 */
class Borrower
{
private:
        std::string name;        ///< Name of the borrower
        int borrowerID;          ///< Unique identifier for the borrower
        int borrowedBooks[5];    ///< IDs of books currently borrowed
        int numBooks;            ///< Number of books currently borrowed

public:
        /**
         * @brief Default constructor creating an unnamed borrower with ID 0.
         */
        Borrower() : borrowerID(0), name(""), numBooks(0) {}

        /**
         * @brief Construct a borrower with an ID and name.
         * @param id Unique identifier for the borrower.
         * @param name Name of the borrower.
         */
        Borrower(int id, const std::string& name);

        /**
         * @brief Record that the borrower has borrowed a book.
         * @param bookID ID of the book being borrowed.
         */
        void borrowBook(int bookID);

        /**
         * @brief Record that the borrower has returned a book.
         * @param bookID ID of the book being returned.
         */
        void returnBook(int bookID);

        /**
         * @brief Get the number of books currently borrowed.
         * @return Count of borrowed books.
         */
        int getNumBooks();

        /**
         * @brief Get the list of borrowed book IDs.
         * @return Pointer to an array containing borrowed book IDs.
         */
        int* getBorrowedBooks();

        /**
         * @brief Get the unique identifier of the borrower.
         * @return Borrower ID.
         */
        int getID();
};
