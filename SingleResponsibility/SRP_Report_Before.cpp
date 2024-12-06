#include <iostream>
#include <fstream>
#include <string>

class Report {
public:
    void generateAndSave(const std::string& filename) {
        std::string report = "Report content.";
        
        // Saving to file logic
        std::ofstream file(filename);
        if (file.is_open()) {
            file << report;
            file.close();
        } else {
            std::cerr << "Error opening file: " << filename << std::endl;
        }
        
        // Reporting
        std::cout << "Report generated and saved to " << filename << std::endl;
    }
};

int main() {
    Report report;
    report.generateAndSave("report.txt");

    return 0;
}




















