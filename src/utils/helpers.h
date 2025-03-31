#ifndef HELPERS_H
#define HELPERS_H

#include <string>
#include <iostream>
#include <limits>

namespace Utils {

    // Function to get a valid integer input from the user
    int getValidIntInput() {
        int input;
        while (true) {
            std::cin >> input;
            if (std::cin.fail()) {
                std::cin.clear(); // clear the error flag
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // discard invalid input
                std::cout << "Invalid input. Please enter an integer: ";
            } else {
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // discard any remaining input
                return input;
            }
        }
    }

    // Function to get a valid string input from the user
    std::string getValidStringInput() {
        std::string input;
        std::getline(std::cin, input);
        return input;
    }

    // Function to display a message and wait for user input to continue
    void waitForUser() {
        std::cout << "Press Enter to continue...";
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

}

#endif // HELPERS_H