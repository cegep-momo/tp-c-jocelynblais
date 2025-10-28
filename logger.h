#ifndef LOGGER_H
#define LOGGER_H

#include <vector>
#include <string>

using namespace std;

class Logger {
private:
    static vector<string> logs;
public:
    static void logEvent(const string& event);
    static string displayLogs();
    static vector<string> getAllLogs();
};

#endif
