# Library Manager

Library Manager is a console-based system to manage books and borrowers.

## Build

### Visual Studio
1. Open `LibraryManager.sln` in Visual Studio.
2. Build and run the solution.

### Command Line

```bash
g++ -std=c++17 -I. Book.cpp Borrower.cpp Library.cpp tests/TestLibrary.cpp -o LibraryManager
./LibraryManager
```

## Usage

Running the compiled program will produce output similar to:

```
Added book with ID: 1
Title: Book One Author: A Joe
Added book with ID: 2
Title: Book Two Author: B Joe
...
Borrower 1 has borrowed books: 1 2
Borrower 2 has borrowed books: 3 5
```

## License

This project is licensed under the [MIT License](LICENSE).

