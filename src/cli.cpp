#include <iostream>
#include <string>
#include <sstream> // For string stream
#include "inv.h" // Include the inventory management logic
#include <vector>

void displayMenu() {
    std::cout << "Inventory Management System\n";
    std::cout << "1. Show Commands\n";
    std::cout << "2. Open Tool\n";
}

void handleFindCommand(const std::string& itemName, inventory& inv) {
    int index = searchItem(inv, itemName); // Use the searchItem function
    if (index != -1) {
        std::cout << "Item found: " << inv.items[index].name << "\n";
        std::cout << "Price: " << inv.items[index].price << "\n";
        std::cout << "Quantity: " << inv.items[index].quantity << "\n";
    } else {
        std::cout << "Item not found.\n";
    }
}

void handleMenu(std::string command, inventory& inv) {
    std::istringstream iss(command); // Extract the first word (command)
    
    if (command == "FIND") {
        std::string itemName;
        std::getline(iss, itemName); // Extract the rest of the line as the item name
        itemName.erase(0, itemName.find_first_not_of(" ")); // Trim leading spaces
        handleFindCommand(itemName, inv);
    } else {
        std::cout << "Unknown command.\n";
    }

    if (command == "ADD") {
        std::string itemName;
        std::getline(iss, itemName); // Extract the rest of the line as the item name
        itemName.erase(0, itemName.find_first_not_of(" ")); // Trim leading spaces
        handleFindCommand(itemName, inv);
    } else {
        std::cout << "Unknown command.\n";
    }

    if (command == "REMOVE") {
        std::string itemName;
        std::getline(iss, itemName); // Extract the rest of the line as the item name
        itemName.erase(0, itemName.find_first_not_of(" ")); // Trim leading spaces
        handleFindCommand(itemName, inv);
    } else {
        std::cout << "Unknown command.\n";
    }

    if (command == "SEARCHBYCATEGORY") {
        std::string categoryName;
        std::getline(iss, categoryName); // Extract the rest of the line as the item name
        categoryName.erase(0, categoryName.find_first_not_of(" ")); // Trim leading spaces
        handleFindCommand(categoryName, inv);
    } else {
        std::cout << "Unknown command.\n";
    }

    if (command == "SEARCHINCATEGORY") {
        std::string categoryName;
        std::getline(iss, categoryName); // Extract the rest of the line as the item name
        categoryName.erase(0, categoryName.find_first_not_of(" ")); // Trim leading spaces
        handleFindCommand(categoryName, inv);
    } else {
        std::cout << "Unknown command.\n";
    }

    if (command == "SEARCHBYBRAND") {
        std::string brandName;
        std::getline(iss, brandName); // Extract the rest of the line as the item name
        brandName.erase(0, brandName.find_first_not_of(" ")); // Trim leading spaces
        handleFindCommand(brandName, inv);
    } else {
        std::cout << "Unknown command.\n";
    }
    if (command == "SEARCHINBRAND") {
        std::string brandName;
        std::getline(iss, brandName); // Extract the rest of the line as the item name
        brandName.erase(0, brandName.find_first_not_of(" ")); // Trim leading spaces
        handleFindCommand(brandName, inv);
    } else {
        std::cout << "Unknown command.\n";
    }
    if (command == "ADDTOCART") {
        std::string itemName;
        std::getline(iss, itemName); // Extract the rest of the line as the item name
        itemName.erase(0, itemName.find_first_not_of(" ")); // Trim leading spaces
        handleFindCommand(itemName, inv);
    } else {
        std::cout << "Unknown command.\n";
    }

    if (command == "REMOVEFROMCART") {
        std::string itemName;
        std::getline(iss, itemName); // Extract the rest of the line as the item name
        itemName.erase(0, itemName.find_first_not_of(" ")); // Trim leading spaces
        handleFindCommand(itemName, inv);
    } else {
        std::cout << "Unknown command.\n";
    }

    if (command == "CHECKOUT") {
        std::string itemName;
        std::getline(iss, itemName); // Extract the rest of the line as the item name
        itemName.erase(0, itemName.find_first_not_of(" ")); // Trim leading spaces
        handleFindCommand(itemName, inv);
    } else {
        std::cout << "Unknown command.\n";
    }
    if (command == "SHOWCART") {
        std::string itemName;
        std::getline(iss, itemName); // Extract the rest of the line as the item name
        itemName.erase(0, itemName.find_first_not_of(" ")); // Trim leading spaces
        handleFindCommand(itemName, inv);
    } else {
        std::cout << "Unknown command.\n";
    }
    if (command == "SHOWITEMS") {
        std::string itemName;
        std::getline(iss, itemName); // Extract the rest of the line as the item name
        itemName.erase(0, itemName.find_first_not_of(" ")); // Trim leading spaces
        handleFindCommand(itemName, inv);
    } else {
        std::cout << "Unknown command.\n";
    }
    if (command == "SHOWCATEGORIES") {
        std::string itemName;
        std::getline(iss, itemName); // Extract the rest of the line as the item name
        itemName.erase(0, itemName.find_first_not_of(" ")); // Trim leading spaces
        handleFindCommand(itemName, inv);
    } else {
        std::cout << "Unknown command.\n";
    }
    if (command == "SHOWBRANDS") {
        std::string itemName;
        std::getline(iss, itemName); // Extract the rest of the line as the item name
        itemName.erase(0, itemName.find_first_not_of(" ")); // Trim leading spaces
        handleFindCommand(itemName, inv);
    } else {
        std::cout << "Unknown command.\n";
    }
    if (command == "SHOWCART") {
        std::string itemName;
        std::getline(iss, itemName); // Extract the rest of the line as the item name
        itemName.erase(0, itemName.find_first_not_of(" ")); // Trim leading spaces
        handleFindCommand(itemName, inv);
    } else {
        std::cout << "Unknown command.\n";
    }
    if (command == "SHOWALL") {
        std::string itemName;
        std::getline(iss, itemName); // Extract the rest of the line as the item name
        itemName.erase(0, itemName.find_first_not_of(" ")); // Trim leading spaces
        handleFindCommand(itemName, inv);
    } else {
        std::cout << "Unknown command.\n";
    }
}

int main() {
    inventory inv;
    std::string input;
    
    // Example inventory setup
    item exampleItem = {1121, 20000, 1839.99,"Laptop", "Lenovo 100", "Electronics", "Lenovo", "Black"};
    addItem(inv, exampleItem);

    std::cout << "Welcome to the Inventory Management System!\n";
    std::cout << "Please select an option from the menu below:\n";
    displayMenu();
    while (true) {
        // Read the entire input line
        std::getline(std::cin, input);

        // Parse the input
        std::istringstream iss(input);
        std::string command;
        iss >> command; // Extract the first word (command)

        // Handle the command
        handleMenu(command, inv);
    }


    return 0;
}