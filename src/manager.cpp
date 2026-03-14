#include "models/manager.hpp"

Manager::Manager(std::string n, std::string cpf, std::string mail, int age,
                 int id, char sec, double sal)
    : User(n, cpf, mail, age, id), Sector(sec), Salary(sal) {}

Manager::Manager(sol::table m) : User(m), Sector('A'), Salary(m["Salary"]) {}

void Manager::print_info() {
  std::cout << "Nome: " << get_name() << "\n";
  std::cout << "Email: " << get_age() << "\n";
  std::cout << "Setor: " << Sector << "\n";
}