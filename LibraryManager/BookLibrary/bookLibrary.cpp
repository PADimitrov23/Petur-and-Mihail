#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct BOOK
{
    string title;
    string author;
    int year;
    double price;
};

struct LIBRARY
{
    string name;
    vector<BOOK> books;
};

BOOK createBook(const string& title, const string& author, int year, double price)
{
    return BOOK{ title, author, year, price };
}

void printBook(const BOOK& book)
{
    cout << book.title << endl;
    cout << book.author << endl;
    cout << book.year << endl;
    cout << book.price << "$" << endl;

}

void printLibrary(const LIBRARY& library) {
    cout << library.name << endl;

    for (int i = 0; i < library.books.size(); i++) {
        cout << library.books[i].title << " ";
    }

    cout << endl;
}

void averageBookPrice(const LIBRARY& library) {
    cout << "Average book price in library " << library.name << endl;

    int sum = 0;

    for (int i = 0; i < library.books.size(); i++) {
        sum += library.books[i].price;
    }

    cout << "Total Average Sum: " << sum << endl;
}

void oldestBookInLibrary(const LIBRARY& library) {
    cout << "Oldest book in library" << library.name << endl;

    int oldest = library.books[0].year;
    int oldestIndex = 0;

    for (int i = 0; i < library.books.size(); i++) {
        if (oldest > library.books[i].year) {
            oldest = library.books[i].year;
            oldestIndex = i;
        }
    }

    cout << "Oldest Book is: " << library.books[oldestIndex].title << " " << oldest << endl;
}