# Configuración mínima de CMake
cmake_minimum_required(VERSION 3.10)

# Nombre del proyecto
project(SistemaBiblioteca)

# Estándar de C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Carpeta donde están los archivos .h
include_directories(include)

# Archivos fuente del proyecto
add_executable(SistemaBiblioteca
    src/main.cpp
    src/Lib.cpp
    src/Biblio.cpp
)
