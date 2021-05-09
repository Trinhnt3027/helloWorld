cmake_minimum_required(VERSION 3.12)

project(helloWorld VERSION 1.0 DESCRIPTION "Hello world project test" LANGUAGES CXX)

add_executable(helloWorld main.cpp)

install(TARGETS helloWorld)
