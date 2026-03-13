#include "models/author.hpp"

Author::Author(std::string n, std::string cpf, std::string mail, int age,
               int id)
    : User(n, cpf, mail, age, id) {}

void Author::print_books() {
  for (auto book : Published_Books) {
    book.print_info();
    std::cout << "\n";
  }
}

void Author::print_info() {
  std::cout << "Nome: " << get_name() << "\n";
  std::cout << "Idade: " << get_age() << "\n";
  std::cout << "Livros publicados: " << "\n";
  print_books();
  std::cout << "\n";
}
