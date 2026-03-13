#ifndef BOOK_HPP
#define BOOK_HPP

#include <string>

class Book {
  std::string Title;
  std::string Author;
  std::string Languague;
  std::string ISBN;  // ISBN-13
  int Print_Lenght;
  double Price;
  int ID;

 protected:
  int get_id();

  void set_id(Book*, int);

  void set_price(Book*, double);  // O manager que edita preço dos livros

 public:
  Book(std::string, std::string, std::string, std::string, int, double, int);

  void set_name(std::string);

  std::string get_name();

  std::string get_author();

  std::string get_ISBN();

  double get_price();

  int get_pages();

  void print_info();

  friend class Manager;
};

#endif  // !BOOK_HPP