cmake_minimum_required(VERSION 3.29)
project(PPRG_CWICZENIA)

set(CMAKE_CXX_STANDARD 20)

set( CMAKE_BUILD_TYPE Debug )

add_executable(PPRG_CWICZENIA main.cpp
        zjazd_8/kalkulator_macierzowy/kalkulator.cpp
)
