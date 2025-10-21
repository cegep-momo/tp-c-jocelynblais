#include "book.h"

using namespace std;

// Default constructor
Book::Book() : title("") : author("") : isbn("");

// Constructeur avec paramètre
Book::Book(const string& title, const string& author, const string& isbn);

// Getters
string Book::getTitle() const {return name;}
string Book::getAuthor() const {return author;}
string Book::getISBN() const {return isbn;}
bool getAvailability() const {return available;}
string getBorrowerName() const {return borrowerName;}

// Setters
void Book::setTitle(const string& title) {this->title = title;}
void Book::setAuthor(const string& author) {this->author = author;}
void Book::setISBN(const string& isbn) {this->isbn = isbn;}
void Book::setAvailability(bool available) {this->available=available;}
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
    return "";
}

string Book::toFileFormat() const {
    string result = title + "|" + author + "|" + isbn + "|" + available + "|" + borrowerName;
    return result;
}

void Book::fromFileFormat(const string& line){
    stringstream ss(line);
    
    getline(ss, title, '|');
    getline(ss, author, '|');
    getline(ss, isbn, '|');
    getline(ss, isAvailable, '|');
    getline(ss, borrowerName, '|');
}