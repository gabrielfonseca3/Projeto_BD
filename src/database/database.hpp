#ifndef DATABASE_HPP
#define DATABASE_HPP

#include <pqxx/pqxx>

void setup_database(pqxx::connection);

#endif  // !DATABASE_HPP