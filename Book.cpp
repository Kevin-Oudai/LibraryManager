#include "Book.h"

Book::Book(int id, const std::string& bookTitle, const std::string& bookAuthor)
        : bookID(id), title(bookTitle), author(bookAuthor), available(true)
{
}

// Mark the book as checked out by setting its availability to false.
void Book::checkout()
{
        available = false;
}

// Mark the book as returned by setting its availability to true.
void Book::checkin()
{
        available = true;
}

// Return the current availability status of the book.
bool Book::isAvailable() const
{
        return available;
}

// Retrieve the unique identifier for the book.
int Book::getID() const
{
        return bookID;
}

// Retrieve the title of the book.
std::string Book::getTitle() const
{
        return title;
}

// Retrieve the author of the book.
std::string Book::getAuthor() const
{
        return author;
}
