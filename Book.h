#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book
{
private:
	std::string title;
	std::string author;
	int bookID;
	bool status;
	
public:
	Book() : bookID(0), title(""), author(""), status(true) {} // Default constructor
	Book(int id, const std::string& title, const std::string& author);
	void checkout();
	void checkin();
	bool isAvailable() const;
	int getID() const;
	std::string getTitle() const;
	std::string getAuthor() const;

};
#endif

