#include "models/inventory.hpp"

#include <algorithm>
#include <iostream>
#include <vector>

#include "models/book.hpp"

Inventory::Inventory(pqxx::connection& db) : DB(db) {}

void Inventory::add_book(pqxx::work workspace, sol::table i) {
  std::string Title = i["Title"];
  std::string Author = i["Author"];
  std::string Language = i["Language"];
  std::string ISBN = i["ISBN"];
  int Print_Lenght = i["Pages"];
  double Price = i["Price"];

  workspace.exec(
      "INSERT INTO books (title, author, language, isbn, pages, price) VALUES "
      "($1, $2, $3, $4, $5, $6) ",
      pqxx::params{Title, Author, Language, ISBN, Print_Lenght, Price});
}

void Inventory::remove_book(int id) {}

void Inventory::list_stock() {}
