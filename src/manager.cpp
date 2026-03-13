#include "models/manager.hpp"

Manager::Manager(std::string n, std::string cpf, std::string mail, int age,
                 int id, char sec, double sal)
    : User(n, cpf, mail, age, id), Sector(sec), Salary(sal) {}

void Manager::print_info() {
  std::cout << "Nome: " << get_name() << "\n";
  std::cout << "Email: " << get_age() << "\n";
  std::cout << "Setor: " << Sector << "\n";
}