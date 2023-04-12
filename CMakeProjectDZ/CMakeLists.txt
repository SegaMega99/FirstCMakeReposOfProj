cmake_minimum_required (VERSION 3.8)

project (CMakeProject1)

include_directories(CMakeProjectDZ/include)

file(GLOB Proj_dfg "src/*.cpp")

add_library(CMake_ProjectDZ STATIC ${Proj_dfg})

target_include_directories(CMake_ProjectDZ PUBLIC ./include)