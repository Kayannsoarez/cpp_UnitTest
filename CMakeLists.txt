cmake_minimum_required(VERSION 3.28)
project(cpp_UnitTest)

set(CMAKE_CXX_STANDARD 17)

add_executable(cpp_UnitTest
        src/Avaliador.hpp
        src/Avaliador.cpp
        src/Lance.hpp
        src/Lance.cpp
        src/Leilao.hpp
        src/Leilao.cpp
        src/Usuario.hpp
        src/Usuario.cpp
        tests/test_avaliador.cpp
        tests/catch.hpp
        tests/test_leilao.cpp
        tests/main_test.cpp
        tests/test_usuario.cpp)
