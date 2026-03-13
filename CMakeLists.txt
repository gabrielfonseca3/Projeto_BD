cmake_minimum_required(VERSION 3.10.0)
project(Projeto_BD VERSION 0.1.0 LANGUAGES C CXX)

set(SOURCES src/main.cpp src/author.cpp src/book.cpp
src/cashier.cpp src/client.cpp src/inventory.cpp src/manager.cpp
src/sale.cpp src/user.cpp)

add_executable(Projeto_BD ${SOURCES})

target_include_directories(Projeto_BD PRIVATE include)
