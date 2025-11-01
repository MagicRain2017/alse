cmake_minimum_required(VERSION 3.10)
project(TiendaOnline)
set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(TiendaOnline
    src/main.cpp
    src/Producto.cpp
)
