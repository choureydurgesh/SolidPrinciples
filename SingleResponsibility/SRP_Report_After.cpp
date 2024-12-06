#include <iostream>
#include <fstream>
#include <string>
#include <format> // Requires C++20

class ReportGenerator {
public:
    [[nodiscard("This is generate repoert return type ")]] std::string generateReport() const {
        return "Report content.";
    }
};

class ReportSaver {
public:
    void saveToFile(std::string_view filename, std::string_view content) const {
        std::ofstream file(filename.data());
        if (file.is_open()) {
            file << content;
        } else {
            std::cerr << std::format("Error opening file: {}\n", filename);
        }
    }
};

int main() {
    ReportGenerator reportGenerator;
    ReportSaver reportSaver;

    const auto report = reportGenerator.generateReport();
    reportSaver.saveToFile("report.txt", report);

    std::cout << "Report generated and saved." << std::endl;
    return 0;
}
