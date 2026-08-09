#include "Report.h"
#include <iostream>

Report::Report() {
    // Constructor
}

void Report::generateSummaryReport() {
    std::cout << "Generating report...\n";
}

void Report::displayReport() const {
    std::cout << "--- EduAssist Report Summary ---\n";
    std::cout << "Status: Success\n";
    std::cout << "--------------------------------\n";
}
