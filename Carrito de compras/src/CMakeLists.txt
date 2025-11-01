cmake_minimum_required(VERSION 3.10)
project(CarritoCompras)

set(CMAKE_CXX_STANDARD 11)

add_executable(CarritoCompras
    main.cpp
    Producto.cpp
    ItemCarrito.cpp
    CarritoCompras.cpp
    Usuario.cpp
)
