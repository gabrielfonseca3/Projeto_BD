#include <iostream>
#include <pqxx/pqxx>
#include <sol/sol.hpp>

#include "models/author.hpp"
#include "models/book.hpp"
#include "models/cashier.hpp"
#include "models/client.hpp"
#include "models/inventory.hpp"
#include "models/manager.hpp"
#include "models/sale.hpp"

int main(int, char**) {
  std::cout << "Hello, from Projeto_BD!\n\n\n";
  sol::state lua;

  lua.open_libraries(sol::lib::base, sol::lib::io, sol::lib::math,
                     sol::lib::table, sol::lib::string);

  lua.script_file("scripts/interface.lua");
  if (!"scripts/interface.lua") std::cout << "Erro ao acessar o interface\n";

  sol::table client = lua["Client"];
  sol::table book1 = lua["Book1"];
  sol::table book2 = lua["Book2"];
  sol::table manager = lua["Manager"];
  sol::table cashier = lua["Cashier"];

  Client c1(client);
  Book b1(book1), b2(book2);
  Manager m1(manager);
  Cashier cash1(&m1, cashier);

  c1.print_info();
  b1.print_info();
  b2.print_info();
  m1.print_info();
  cash1.print_info();

  return 0;
}
