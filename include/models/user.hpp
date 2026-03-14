#ifndef USER_HPP
#define USER_HPP

// Classe base pra todos os usuários do sistema, seja autor, funcionário ou
// cliente

#include <iostream>
#include <sol/sol.hpp>
#include <string>

class User {
  std::string Name;
  std::string CPF;
  std::string Email;
  int Age;
  int ID;

 public:
  User(std::string, std::string, std::string, int, int);

  User(sol::table);

  // Para efeitos de sinmplicidade apenas o nome e idade podem ser editados

  void set_name(std::string);

  void set_age(int);

  std::string get_name();

  int get_age();

  virtual void print_info() = 0;
};

#endif  // !USER_HPP
