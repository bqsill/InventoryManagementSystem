#include "inv.h"

// Implement all functions here
int addToCart(user& user, item i) {
    if (i.quantity <= 0) {
        return -1; // error: invalid item quantity
    }
    user.active_cart.items.push_back(i);
    user.active_cart.total_price += i.price * i.quantity;
    return 0; // success
}

int subtractItemQuantity(item i, inventory& inv) {
    if (i.quantity <= 0) {
        return -1; // error: item quantity is already zero
    }
    if (i.quantity - 1 == 0) {
        for (size_t ctr = 0; ctr < inv.items.size(); ctr++) {
            if (inv.items[ctr].id == i.id) {
                inv.items.erase(inv.items.begin() + ctr);
                break;
            }
        }
    }
    i.quantity--;
    return 0;
}

int addItemQuantity(item i) {
    i.quantity++;
    return 0;
}

int addBrand(inventory& inv, brand b) {
    inv.brands.push_back(b);
    return 0; // success
}

int addItem(inventory& inv, item i) {
    inv.items.push_back(i);
    return 0; // success
}

int addCategory(inventory& inv, category c) {
    inv.categories.push_back(c);
    return 0; // success
}

int removeItem(inventory& inv, item i) {
    for (size_t ctr = 0; ctr < inv.items.size(); ctr++) {
        if (inv.items[ctr].id == i.id) {
            inv.items.erase(inv.items.begin() + ctr);
            return 0; // success
        }
    }
    return -1; // error: item not found
}

int removeCategory(inventory& inv, category c) {
    for (size_t ctr = 0; ctr < inv.categories.size(); ctr++) {
        if (inv.categories[ctr].name == c.name) {
            inv.categories.erase(inv.categories.begin() + ctr);
            return 0; // success
        }
    }
    return -1; // error: category not found
}

int removeBrand(inventory& inv, brand b) {
    for (size_t ctr = 0; ctr < inv.brands.size(); ctr++) {
        if (inv.brands[ctr].name == b.name) {
            inv.brands.erase(inv.brands.begin() + ctr);
            return 0; // success
        }
    }
    return -1; // error: brand not found
}

int searchItem(inventory& inv, std::string name) {
    for (size_t ctr = 0; ctr < inv.items.size(); ctr++) {
        if (inv.items[ctr].name == name) {
            return ctr; // success: item found at index ctr
        }
    }
    return -1; // error: item not found
}

int searchCategory(inventory& inv, std::string name) {
    for (size_t ctr = 0; ctr < inv.categories.size(); ctr++) {
        if (inv.categories[ctr].name == name) {
            return ctr; // success: category found at index ctr
        }
    }
    return -1; // error: category not found
}

int searchBrand(inventory& inv, std::string name) {
    for (size_t ctr = 0; ctr < inv.brands.size(); ctr++) {
        if (inv.brands[ctr].name == name) {
            return ctr; // success: brand found at index ctr
        }
    }
    return -1; // error: brand not found
}

// Removed or renamed the main function
void testInventory() {
    // Example test code
}

