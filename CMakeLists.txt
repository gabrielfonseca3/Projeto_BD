cmake_minimum_required(VERSION 3.10.0)
project(Projeto_BD VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SOURCES src/main.cpp src/models/ src/author.cpp src/book.cpp
src/cashier.cpp src/client.cpp src/inventory.cpp src/manager.cpp
src/sale.cpp src/user.cpp)

add_executable(Projeto_BD ${SOURCES})

target_include_directories(Projeto_BD PRIVATE ${PROJECT_SOURCE_DIR}/include)

find_package(PkgConfig REQUIRED)
find_package(libpqxx REQUIRED)
find_package(Lua REQUIRED)

target_link_libraries(Projeto_BD PRIVATE pqxx pq ${LUA_LIBRARIES})

target_compile_options(Projeto_BD PRIVATE -Wno-template-body)