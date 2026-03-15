#include <exception>
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

  lua.open_libraries(sol::lib::base, sol::lib::package, sol::lib::math,
                     sol::lib::table, sol::lib::string, sol::lib::os);

  lua.script_file("scripts/test.lua");
  lua.script_file("scripts/ai_script.lua");
  if (!"scripts/test.lua") std::cout << "Erro ao acessar os testes\n";
  if (!"scripts/ai_script.lua") std::cout << "Erro ao acessar o script de IA\n";

  sol::table client = lua["Client"];

  sol::table manager = lua["Manager"];
  sol::table cashier = lua["Cashier"];

  sol::table books = lua["books"];
  Client c1(client);

  Manager m1(manager);
  Cashier cash1(&m1, cashier);

  std::cout << "Testando o postgres\n\n";
  std::string psql = "dbname=livraria_db user=gabriel";

  pqxx::connection postgres(psql);
  pqxx::work workspace(postgres);
  Inventory inventory(postgres);

  workspace.commit();  // Escreve as mudanças em disco

  return 0;
}
