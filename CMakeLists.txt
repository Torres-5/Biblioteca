cmake_minimum_required(VERSION 3.10)
project(BibliotecaDigital)

set(CMAKE_CXX_STANDARD 17)

# Directorios de origen
include_directories(src)

# Ejecutable principal
add_executable(biblioteca src/main.cpp)

# Configuración para pruebas (opcional)
enable_testing()
add_subdirectory(tests)
