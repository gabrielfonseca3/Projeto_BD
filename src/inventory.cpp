#include "models/inventory.hpp"

#include <algorithm>
#include <iostream>
#include <vector>

#include "models/book.hpp"

Inventory::Inventory() {}

void Inventory::add_book(Book b) { Stock.push_back(b); }

void Inventory::remove_book(int id) {
  auto b = std::find_if(Stock.begin(), Stock.end(),
                        [id](Book b) { return b.get_id() == id; });
  if (b != Stock.end()) {
    Stock.erase(b);
  }
}

void Inventory::list_stock() {
  for (auto Book : Stock) {
    Book.print_info();
    std::cout << "\n";
  }
}
