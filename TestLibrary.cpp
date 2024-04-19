#include <iostream>
#include "Library.h"

int main()
{
	Library lib;
	// Add books
	lib.addBook(Book(1, "Book One", "A Joe"));
	lib.addBook(Book(2, "Book Two", "B Joe"));
	lib.addBook(Book(3, "Book Three", "C Joe"));
	lib.addBook(Book(4, "Book four", "D Joe"));
	lib.addBook(Book(5, "Book five", "E Joe"));

	// Add Borrowers
	lib.addBorrower(Borrower(1, "John Doe"));
	lib.addBorrower(Borrower(2, "Jane Doe"));

	lib.checkoutBook(1, 1); // John Doe borrowed Book One
	lib.checkoutBook(1, 2); // John Doe borrowed Book Two
	lib.checkoutBook(2, 3); // Jane Doe borrowed Book Three

	lib.showBorrowerInfo(1); // Show John Doe info
	lib.showBorrowerInfo(2); // Show Jane Doe info

	lib.returnBook(1, 1); // John Doe returned Book One
	lib.checkoutBook(2, 5); // Jane Doe borrowed Book Five

	lib.showBorrowerInfo(1); // Show John Doe info
	lib.showBorrowerInfo(2); // Show Jane Doe info
	return 0;
}