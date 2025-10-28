#include "logger.h"
#include <ctime>

//Logger::Logger() {}
vector<string> Logger::logs;

// Enregistrer un évènement dans le journal
void Logger::logEvent(const string& event) {
    time_t now = time(0);
    string currentTime = ctime(&now);

    if(!currentTime.empty() && currentTime.back() == '\n'){
        currentTime.pop_back();
    }
    
    logs.push_back("["+currentTime+"] " + event);
}

// Affichers les évènements du journal
string Logger::displayLogs() {
    string allLogs;
    for (const auto& log : logs) {
        allLogs += log + "\n";
    }
    return allLogs;
}

// Récupérer tous les logs
vector<string> Logger::getAllLogs() {
    return logs;
}