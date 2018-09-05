cmake_minimum_required(VERSION 3.9)
project(Test1_0 C)

include(FindPkgConfig)
pkg_check_modules(GLIB glib-2.0 REQUIRED)
include_directories(${GLIB_INCLUDE_DIRS})


set(CMAKE_C_STANDARD 11)

add_library(1_LinkedLists RSA.c)