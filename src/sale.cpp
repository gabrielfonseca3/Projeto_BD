#include "models/sale.hpp"

Sale::Sale(std::vector<Book> order, Cashier* seller, Client* buyer,
           double total, int id)
    : Shopping_Cart(order),
      Seller(seller),
      Buyer(buyer),
      Order_Total(total),
      ID(id) {}

void Sale::print_order() {
  for (auto book : Shopping_Cart) {
    std::cout << "Livro: " << book.get_name() << "\n";
    printf("Preço: %2.f\n\n", book.get_price());
  }
}
void Sale::print_info() {
  std::cout << "Lista de itens: " << "\n";
  std::cout << "Vendedor: " << Seller->get_name() << "\n";
  std::cout << "Cliente: " << Buyer->get_name() << "\n";
  printf("Total a ser pago: %.2f\n", Order_Total);
}