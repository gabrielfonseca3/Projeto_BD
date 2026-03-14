#include "models/cashier.hpp"

#include "models/manager.hpp"

Cashier::Cashier(std::string n, std::string cpf, std::string mail, int age,
                 int id, Manager* adm, double salary, std::string shift)
    : User(n, cpf, mail, age, id),
      Sector_Manager(adm),
      Salary(salary),
      Shift(shift) {}

Cashier::Cashier(Manager* man, sol::table c)
    : User(c), Sector_Manager(man), Salary(c["Salary"]), Shift(c["Shift"]) {}

void Cashier::set_salary(Cashier* c, double sal) { c->Salary = sal; }

void Cashier::set_shift(Cashier* c, std::string shift) { c->Shift = shift; }

void Cashier::change_manager(Cashier* c, Manager* adm) {
  c->Sector_Manager = adm;
}

void Cashier::print_info() {
  std::cout << "Nome: " << get_name() << "\n";
  std::cout << "Gerente: " << Sector_Manager->get_name() << "\n";
  std::cout << "Turno: " << Shift << "\n";
}