#include <sstream>
#include <algorithm>

#include "book.h"

using namespace std;

// Default constructor
Book::Book() : title(""), author(""), isbn(""), isAvailable(true), borrowerName("") {}

// Constructeur avec paramètre
Book::Book(const string& title, const string& author, const string& isbn): title(title), author(author), isbn(isbn), isAvailable(true), borrowerName("") {}

// Getters
string Book::getTitle() const {return title;}
string Book::getAuthor() const {return author;}
string Book::getISBN() const {return isbn;}
bool Book::getAvailability() const {return isAvailable;}
string Book::getBorrowerName() const {return borrowerName;}

// Setters
void Book::setTitle(const string& title) {this->title = title;}
void Book::setAuthor(const string& author) {this->author = author;}
void Book::setISBN(const string& isbn) {this->isbn = isbn;}
void Book::setAvailability(bool available) {this->isAvailable=available;}
void Book::setBorrowerName(const string& name) {this->borrowerName=name;}

// Methods
void Book::checkOut(const string& borrower) {
    this->setBorrowerName(borrower);
    this->setAvailability(false);
}

void Book::returnBook(){
    this->setBorrowerName("");
    this->setAvailability(true);
}

string Book::toString() const {
    return title + "|" + author + "|" + isbn;
}

string Book::toFileFormat() const {
    string result = title + "|" + author + "|" + isbn + "|" + (isAvailable ? "1" : "0") + "|" + borrowerName;
    return result;
}

void Book::fromFileFormat(const string& line){
    stringstream ss(line);
    
    getline(ss, this->title, '|');
    getline(ss, this->author, '|');
    getline(ss, this->isbn, '|');

    string availableStr;
    getline(ss, availableStr, '|');
    this->setAvailability((availableStr=="0"? false:true));
    getline(ss, this->borrowerName, '|');
}