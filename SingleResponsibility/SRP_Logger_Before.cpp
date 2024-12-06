#include <iostream>
#include <fstream>
#include <string>

class Logger {
public:
    void log(const std::string& message) {
        // Console logging
        std::cout << message << std::endl;

        // File logging
        std::ofstream file("log.txt");
        if (file.is_open()) {
            file << message;
            file.close();
        } else {
            std::cerr << "Error opening file for logging." << std::endl;
        }
    }
};

int main() {
    Logger logger;
    logger.log("This is a log message.");

    return 0;
}