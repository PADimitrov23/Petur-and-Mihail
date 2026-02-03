
#include <iostream>
#include <vector>
#include <string>
#include "..\BookLibrary\bookLibrary.hpp"
using namespace std;

int main(){
    char response = 'O';
    string title, author;
    float year, price;

    LIBRARY myLibrary;

    while (true) {
        cout << "Create a book in myLibrary ? (Y, N)" << endl;
        cin >> response;
        if (response == 'Y' or response == 'y') {
            cout << "Input title, author, year, price (IN ORDER!)" << endl;
            cin >> title >> author >> year >> price;
            BOOK newBook = createBook(title, author, year, price);
            myLibrary.books.push_back(newBook);
        }
        else if (response == 'N' or response == 'n') {
            break;
        }
        else {
            break;
        }
    }


    std::cout << "Library Contents:\n";
    printLibrary(myLibrary);

    averageBookPrice(myLibrary);
    oldestBookInLibrary(myLibrary);
}
