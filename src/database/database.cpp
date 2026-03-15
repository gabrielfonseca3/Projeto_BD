#include "database.hpp"

void setup_database(pqxx::connection& C) {
  try {
    pqxx::work W(C);

    std::string create_table_client = R"(
    CREATE TABLE IF NOT EXISTS Clients
    (ID SERIAL PRIMARY KEY,
    Name VARCHAR(50) NOT NULL,
    CPF VARCHAR(14) UNIQUE NOT NULL,
    EMAIL VARCHAR(50),
    AGE INT);
    )";




    




    W.exec(create_table_client);



  } catch () {
  }
}