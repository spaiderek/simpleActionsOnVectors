cmake_minimum_required(VERSION 3.28)
project(vectors)

set(CMAKE_CXX_STANDARD 26)

add_executable(vectors main.cpp
        cartesianStyle.cpp
        PolarStyle.h
        PolarStyle.cpp
        ActionsVectors.h
        ActionsVectors.cpp
)
