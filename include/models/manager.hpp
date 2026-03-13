#ifndef MANAGER_HPP
#define MANAGER_HPP

#include "user.hpp"

class Manager : public User {
  char Sector;  // Setor que o manager cuida, tipo A, B, C...
  double Salary;

 public:
  Manager(std::string, std::string, std::string, int, int, char, double);

  void print_info();
};

#endif  // !MANAGER_HPP