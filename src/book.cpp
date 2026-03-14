#include "models/book.hpp"

#include <iostream>

Book::Book(std::string name, std::string author, std::string lang,
           std::string isbn, int pages, double price, int id)
    : Title(name),
      Author(author),
      Language(lang),
      ISBN(isbn),
      Print_Lenght(pages),
      Price(price),
      ID(id) {}

Book::Book(sol::table b)
    : Title(b["Title"]),
      Author(b["Author"]),
      Language(b["Language"]),
      ISBN(b["ISBN"]),
      Print_Lenght(b["Pages"]),
      Price(b["Price"]),
      ID(b["ID"]) {}

int Book::get_id() { return ID; }

void Book::set_id(Book* b, int id) { b->ID = id; }

void Book::set_price(Book* b, double price) { b->Price = price; }

void Book::set_name(std::string name) { Title = name; }

std::string Book::get_name() { return Title; }

std::string Book::get_author() { return Author; }

std::string Book::get_ISBN() { return ISBN; }

double Book::get_price() { return Price; }

int Book::get_pages() { return Print_Lenght; }

void Book::print_info() {
  std::cout << "Título: " << Title << "\n";
  std::cout << "Autor: " << Author << "\n";
  std::cout << "Idioma:  " << Language << "\n";
  std::cout << "Número de páginas: " << Print_Lenght << "\n";
  std::cout << "ISBN-13: " << ISBN << "\n";
  std::cout << "Preço: " << Price << "\n";
}
