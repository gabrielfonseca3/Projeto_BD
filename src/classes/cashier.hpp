#ifndef CASHIER_HPP
#define CASHIER_HPP

#include "manager.hpp"
#include "user.hpp"

class Cashier : public User {
  Manager* Sector_Manager;
  double Salary;
  int Shift;

 protected:
  void set_salary();

  void set_shift();

  void change_manager();

 public:
  Cashier(std::string, std::string, std::string, int, int, Manager, double,
          int);

  void print_info();
};

#endif  // !CASHIER_HPP