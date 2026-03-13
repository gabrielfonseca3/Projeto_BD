#include "models/user.hpp"

User::User(std::string n, std::string cpf, std::string mail, int age, int id)
    : Name(n), CPF(cpf), Email(mail), Age(age), ID(id) {}

void User::set_name(std::string n) { Name = n; }

void User::set_age(int i) { Age = i; }

std::string User::get_name() { return Name; }

int User::get_age() { return Age; }
