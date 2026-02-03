#pragma once
#include <string>
#include <vector>
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

BOOK createBook(const string& title, const string& author, int year, double price);

void printBook(const BOOK& book);

void printLibrary(const LIBRARY& library);

void averageBookPrice(const LIBRARY& library);

void oldestBookInLibrary(const LIBRARY& library);