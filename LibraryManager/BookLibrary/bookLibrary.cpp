#include <iostream>
using namespace std;

struct Book
{
    string title;
    string author;
    int year;
    double price;
};

struct Library
{
    string name;
    Book* books;
    int count;
};

Book CreateBook(const string& title, const string& author, int year, double price);

void printBook(const Book& book);

