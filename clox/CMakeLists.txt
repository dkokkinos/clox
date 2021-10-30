# CMakeList.txt : CMake project for clox2, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (clox   "chunk.cpp" "chunk.h" "common.h" "main.cpp" "memory.cpp" "memory.h" "debug.h" "debug.cpp" "value.h" "value.cpp")

# TODO: Add tests and install targets if needed.
