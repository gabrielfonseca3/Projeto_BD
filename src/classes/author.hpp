#ifndef AUTHOR_HPP
#define AUTHOR_HPP

#include <vector>

#include "book.hpp"
#include "user.hpp"

class Author : public User {
  std::vector<Book> Published_Books;
  std::string Bio;  // Sobre o autor, uma mini biografia

 protected:
  void add_book();

  void edit_bio();

 public:
  Author(std::string, std::string, std::string, int, int);

  void print_info();

  friend class Manager;  // O manager pode editar a biografia do autor e
                         // adicionar os livros publicados pelo mesmo
};

#endif  // !AUTHOR_HPP