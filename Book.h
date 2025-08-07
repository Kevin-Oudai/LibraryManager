#pragma once

#include <string>

/**
 * @brief Represents a single book that can be stored in the library.
 */
class Book
{
private:
        std::string title;   ///< Title of the book
        std::string author;  ///< Author of the book
        int bookID;          ///< Unique identifier for the book
        bool available;      ///< Availability status of the book

public:
        /**
         * @brief Default constructor initialising an empty, available book.
         */
        Book() : bookID(0), title(""), author(""), available(true) {}

        /**
         * @brief Construct a book with an id, title and author.
         * @param id Unique identifier for the book.
         * @param title Title of the book.
         * @param author Author of the book.
         */
        Book(int id, const std::string& title, const std::string& author);

        /**
         * @brief Mark the book as checked out.
         */
        void checkout();

        /**
         * @brief Mark the book as returned to the library.
         */
        void checkin();

        /**
         * @brief Check if the book is currently available for borrowing.
         * @return true if the book is available, false otherwise.
         */
        bool isAvailable() const;

        /**
         * @brief Get the unique identifier of the book.
         * @return Book ID as an integer.
         */
        int getID() const;

        /**
         * @brief Get the title of the book.
         * @return Book title as a string.
         */
        std::string getTitle() const;

        /**
         * @brief Get the author of the book.
         * @return Book author as a string.
         */
        std::string getAuthor() const;
};


