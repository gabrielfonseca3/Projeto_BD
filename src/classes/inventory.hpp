#ifndef INVENTORY_HPP
#define INVENTORY_HPP

/* Apenas o Manager vai poder adicionar ou remover livros
 * Obviamente a Sale também vai remover os livros do estoque
 */

#include <vector>

#include "book.hpp"

class Inventory {
  std::vector<Book> books;

 public:
  Inventory(std::vector<Book>);

  void list_stock();
};

#endif  // !INVENTORY_HPP