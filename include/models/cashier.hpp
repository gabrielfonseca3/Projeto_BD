#ifndef CASHIER_HPP
#define CASHIER_HPP

#include "manager.hpp"
#include "user.hpp"

class Cashier : public User {
  Manager* Sector_Manager;
  double Salary;
  std::string Shift;  // Manhã, tarde ou noite

 protected:
  void set_salary(Cashier*, double);

  void set_shift(Cashier*, std::string);

  void change_manager(Cashier*, Manager*);

 public:
  Cashier(std::string, std::string, std::string, int, int, Manager*, double,
          std::string);

  void print_info();
};

#endif  // !CASHIER_HPP