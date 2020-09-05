cmake_minimum_required(VERSION 3.10)
project(Bissexto VERSION 1.0 LANGUAGES CXX)

# Especifica o padrão C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

#Inclui os headers, *.h,  no projeto
include_directories(include)


#However, the file(GLOB...) allows for wildcard additions:
file(GLOB SOURCES "src/*.cpp")

add_executable(bissexto ${SOURCES})
