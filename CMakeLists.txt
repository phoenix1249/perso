project(poo_perso)
cmake_minimum_required(VERSION 3.1)
set (CMAKE_CXX_STANDARD 11)

set (SOURCES main.cpp character.cpp character.h)

add_executable( main ${SOURCES})

target_link_libraries(main)