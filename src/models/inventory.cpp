#include "models/inventory.hpp"

#include <iostream>

#include "models/book.hpp"

Inventory::Inventory(Book b) { Stock.push_back(b); }

void Inventory::list_stock() {
  for (auto Book : Stock) {
    Book.print_info();
    std::cout << "\n";
  }
}