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
  std::cout << "Hello, from Projeto_BD!\n";
  sol::state lua;

  lua.open_libraries(sol::lib::base, sol::lib::io, sol::lib::math,
                     sol::lib::table, sol::lib::string);
  lua.open_libraries(sol::lib::string, sol::lib::io);

  lua.script_file("scripts/interface.lua");
}
