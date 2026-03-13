#include "models/book.hpp"

#include <iostream>

Book::Book(std::string name, std::string author, std::string lang,
           std::string isbn, int pages, double price, int id)
    : Title(name),
      Author(author),
      Languague(lang),
      ISBN(isbn),
      Print_Lenght(pages),
      Price(price),
      ID(id) {}

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
  std::cout << "Idioma:  " << Languague << "\n";
  std::cout << "Número de páginas: " << Print_Lenght << "\n";
  std::cout << "ISBN-13: " << ISBN << "\n";
  std::cout << "Preço: " << Price << "\n";
}