# Inventory Management System

This project implements an inventory management system with a command-line interface (CLI) for managing items, categories, and brands. The system allows users to add, remove, and search for items, categories, and brands in the inventory.

## Project Structure

- `src/inv.cpp`: Contains the main inventory management logic, including structures for items, categories, brands, inventory, cart, deals, and user. It also includes functions for adding, removing, and searching for items, categories, and brands.
  
- `src/cli.cpp`: Implements the command-line interface for interacting with the inventory management system. It handles user input, calls the appropriate functions from `inv.cpp`, and displays results to the user.

- `src/utils/helpers.h`: Contains utility functions and definitions that can be used across the project, such as input validation and formatting functions.

- `Makefile`: Automates the build process. It defines rules for compiling the C++ source files and linking them to create the executable for the command-line interface.

## Building the Project

To build the project, navigate to the project directory and run the following command:

```
make
```

This will compile the source files and create the executable for the command-line interface.

## Running the Command-Line Interface

After building the project, you can run the command-line interface using the following command:

```
./InventoryManagementCLI
```

## Usage Examples

1. **Add an Item**: 
   - Command: `add_item <item_name> <quantity> <price> <description> <category> <brand> <color>`
   - Example: `add_item "Laptop" 10 999.99 "Gaming Laptop" "Electronics" "BrandX" "Black"`

2. **Remove an Item**: 
   - Command: `remove_item <item_name>`
   - Example: `remove_item "Laptop"`

3. **Search for an Item**: 
   - Command: `search_item <item_name>`
   - Example: `search_item "Laptop"`

4. **Add a Category**: 
   - Command: `add_category <category_name> <description>`
   - Example: `add_category "Electronics" "Devices and gadgets"`

5. **Remove a Category**: 
   - Command: `remove_category <category_name>`
   - Example: `remove_category "Electronics"`

6. **Add a Brand**: 
   - Command: `add_brand <brand_name> <description>`
   - Example: `add_brand "BrandX" "High-quality electronics"`

7. **Remove a Brand**: 
   - Command: `remove_brand <brand_name>`
   - Example: `remove_brand "BrandX"`

## Contributing

Contributions are welcome! Please feel free to submit a pull request or open an issue for any suggestions or improvements.