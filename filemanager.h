#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include <string>

#include "library.h"
#include "logger.h"

using namespace std;

class FileManager {
private:
    string booksFileName;
    string usersFileName;
    string logsFileName; // Ajout le nom du fichier de logs

public:
    // Constructor
    FileManager(const string& booksFile = "../data/books.txt", 
                const string& usersFile = "../data/users.txt",
                const string& logsFile = "../data/logs.txt"); // Ajout le nom du fichier de logs
    
    // File operations
    bool saveLibraryData(Library& library);
    bool loadLibraryData(Library& library);
    
    // Individual file operations
    bool saveBooksToFile(Library& library);
    bool saveUsersToFile(Library& library);
    bool loadBooksFromFile(Library& library);
    bool loadUsersFromFile(Library& library);
    bool saveLogsToFile(); // Ajout méthode pour sauvegarder les logs
    bool loadLogsFromFile(); // Ajout méthode pour charger les logs
    
    // Utility methods
    bool fileExists(const string& filename);
    void createBackup();
};

#endif
