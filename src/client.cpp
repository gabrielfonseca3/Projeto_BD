#include "models/client.hpp"

Client::Client(std::string n, std::string cpf, std::string mail, int age,
               int id)
    : User(n, cpf, mail, age, id) {
  Credit = 0;
}
Client::Client(sol::table c) : User(c) { Credit = 0; }

void Client::add_credit(double c) { Credit += c; }

void Client::add_cart(int c) { Cart.push_back(c); }

void Client::print_info() {
  std::cout << "Nome: " << get_name() << "\n";
  std::cout << "Idade: " << get_age() << "\n";
  std::cout << "Crédito: " << Credit << "\n";
}