#include <iostream>
#include <vector>
#include <string>

class Book {
private:
    std::string title;
    std::string author;
    int year;

public:
    Book(const std::string& _title, const std::string& _author, int _year)
        : title(_title), author(_author), year(_year) {}

    std::string getTitle() const {
        return title;
    }

    std::string getAuthor() const {
        return author;
    }

    int getYear() const {
        return year;
    }
};

class Library {
private:
    std::vector<Book> books;

public:
    void addBook(const Book& book) {
        books.push_back(book);
    }

    void removeBook(const std::string& title) {
        for (auto it = books.begin(); it != books.end(); ++it) {
            if (it->getTitle() == title) {
                books.erase(it);
                break;
            }
        }
    }

    void displayBooks() const {
        std::cout << "Library Books:" << std::endl;
        for (const auto& book : books) {
            std::cout << "Title: " << book.getTitle() << ", Author: "
                      << book.getAuthor() << ", Year: " << book.getYear()
                      << std::endl;
        }
    }
};

int main() {
    Library library;

    Book book1("The Great Gatsby", "F. Scott Fitzgerald", 1925);
    Book book2("To Kill a Mockingbird", "Harper Lee", 1960);

    library.addBook(book1);
    library.addBook(book2);

    library.displayBooks();

    library.removeBook("To Kill a Mockingbird");

    library.displayBooks();

    return 0;
}
