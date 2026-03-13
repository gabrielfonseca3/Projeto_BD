#ifndef CLIENT_HPP
#define CLIENT_HPP

#include <vector>

#include "user.hpp"

class Client : public User {
  // Crédito do cliente, em caso de reembolso ou arrependimentos
  // em que o dinheiro estornado volta para a conta do usuário
  double Credit;
  // Um carrinho como histórico próprio do cliente, para consultar
  // compras passadas ou verificar qualquer coisa
  std::vector<int> Cart;

 public:
  Client(std::string, std::string, std::string, int, int);

  void add_credit();

  void add_cart();

  void print_info();
};

#endif  // !CLIENT_HPP