#ifndef INVENTORY_HPP
#define INVENTORY_HPP

#include <pqxx/pqxx>
#include <vector>

#include "book.hpp"

class Inventory {
  pqxx::connection& DB;

 public:
  Inventory(pqxx::connection&);

  void add_book(sol::table);

  void remove_book(int);  // Via ID

  void list_stock();
};

#endif  // !INVENTORY_HPP
