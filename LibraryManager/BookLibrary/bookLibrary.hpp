#pragma once

struct Book;

struct Library;

Book CreateBook(const string& title, const string& author, int year, double price);

void printBook(const Book& book);