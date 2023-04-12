cmake_minimum_required(VERSION 3.8)
project("ProjSort")
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ProjSort "main.cpp")

add_subdirectory(CMakeProjectDZ)

target_link_libraries(ProjSort CMake_ProjectDZ)