#ifndef SALE_HPP
#define SALE_HPP

#include "book.hpp"
#include "cashier.hpp"
#include "client.hpp"

class Sale {
  std::vector<Book> Shopping_Cart;
  Cashier* Seller;
  Client* Buyer;
  double Order_Total;
  int ID;

 public:
  Sale(std::vector<Book>, Cashier*, Client*, double, int);

  void print_order();

  void print_info();
};

#endif  // !SALE_HPP