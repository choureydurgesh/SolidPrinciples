#include <iostream>
#include <fstream>
#include <string>
#include <format> // Requires C++20

// Abstract base class for logging operations
class ILogger {
public:
    virtual void log(std::string_view message) const = 0;
    virtual ~ILogger() = default;
};

// Console logger implementation
class ConsoleLogger : public ILogger {
public:
    void log(std::string_view message) const override {
        std::cout << message << std::endl;
    }
};

// File logger implementation
class FileLogger : public ILogger {
public:
    void log(std::string_view message) const override {
        std::ofstream file("log.txt");
        if (file.is_open()) {
            file << message;
        } else {
            std::cerr << std::format("Error opening log file.\n");
        }
    }
};

int main() {
    ConsoleLogger consoleLogger;
    FileLogger fileLogger;

    consoleLogger.log("This is a console log message.");
    fileLogger.log("This is a file log message.");

    return 0;
}
