#ifndef BOOK_HPP
#define BOOK_HPP

#include <string>

class Book{
  std::string Title;
  std::string Author;
  std::string Languague;
  std::string ISBN; // ISBN-13
  double Price;
  int ID;

  protected:
  
  int get_id();

  void set_id();

  public:
  Book(std::string, std::string, std::string, std::string, double, int);

  void set_name(std::string);

  std::string get_name();

  std::string get_author();
  
  std::string get_ISBN();

  double get_price();

  void print_info();

  friend class Manager;
};

#endif // !BOOK_HPP