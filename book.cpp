#include "book.h"

using namespace std;

// Default constructor
Book::Book() : title("") : author("") : isbn("");

// Constructeur avec paramètre
Book::Book(const string& title, const string& author, const string& isbn);