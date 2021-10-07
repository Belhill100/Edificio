cmake_minimum_required(VERSION 3.20)
project(Edificio)

set(CMAKE_CXX_STANDARD 14)

add_executable(Edificio main.cpp View.cpp View.h Edificio.cpp Edificio.h Propietario.cpp Propietario.h Fundador.cpp Fundador.h Reventa.cpp Reventa.h Propiedad.cpp Propiedad.h)
