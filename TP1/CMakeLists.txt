cmake_minimum_required( VERSION 3.0 )
project( MON_PROJET )
set( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -Wall -Wextra" )
set( CMAKE_BUILD_TYPE Debug )  # dans la vraie vie, ne pas mettre cette ligne

add_executable( main.out main.cpp Fibonacci.cpp Vecteur3.cpp)

find_package( PkgConfig REQUIRED )
pkg_check_modules( PKG REQUIRED cpputest )
include_directories( ${PKG_INCLUDE_DIRS} )
add_executable( main_test.out main_test.cpp Fibonacci.cpp
    Fibonacci_test.cpp )
target_link_libraries( main_test.out ${PKG_LIBRARIES} )