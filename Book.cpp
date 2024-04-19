#include "Book.h"


Book::Book(int id, const std::string& t, const std::string& a)
	: bookID(id), title(t), author(a), status(true)
{
}

void Book::checkout()
{
	status = false;
}

void Book::checkin()
{
	status = true;
}

bool Book::isAvailable() const
{
	return status;
}

int Book::getID() const
{
	return bookID;
}

std::string Book::getTitle() const
{
	return title;
}

std::string Book::getAuthor() const
{
	return author;
}
