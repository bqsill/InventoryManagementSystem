#ifndef INV_H
#define INV_H

#include <vector>
#include <string>

// Define structures
struct item {
    int id;
    int quantity;
    double price;
    std::string name;
    std::string description;
    std::string category;
    std::string brand;
    std::string color;
};

struct category {
    std::string name;
    std::string description;
    std::vector<item> items;
};

struct brand {
    std::string name;
    std::string description;
    std::vector<item> items;
};

struct inventory {
    std::vector<item> items;
    std::vector<category> categories;
    std::vector<brand> brands;
};

struct cart {
    std::vector<item> items; // Items in the cart
    double total_price; // Total price of items in the cart
};

struct user {
    std::string name;
    std::string email;
    std::string password;
    struct cart active_cart; // Cart to hold items added by the user
};

// Function declarations
int addToCart(user& user, item i);
int subtractItemQuantity(item i, inventory& inv);
int addItemQuantity(item i);
int addBrand(inventory& inv, brand b);
int addItem(inventory& inv, item i);
int addCategory(inventory& inv, category c);
int removeItem(inventory& inv, item i);
int removeCategory(inventory& inv, category c);
int removeBrand(inventory& inv, brand b);
int searchItem(inventory& inv, std::string name);
int searchCategory(inventory& inv, std::string name);
int searchBrand(inventory& inv, std::string name);

#endif // INV_H