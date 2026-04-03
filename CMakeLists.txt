cmake_minimum_required(VERSION 4.0)
project(ProyectoINT2)

set(CMAKE_CXX_STANDARD 20)

add_executable(ProyectoINT2 main.cpp
        Persona.cpp
        Persona.h
        Cliente.cpp
        Cliente.h
        Servicio.cpp
        Servicio.h
        Pago.cpp
        Pago.h
        SistemaCobros.cpp
        SistemaCobros.h
        Empleado.cpp
        Empleado.h)
