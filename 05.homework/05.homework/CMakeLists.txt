cmake_minimum_required(VERSION 3.5)

project(05.homework)


add_executable(statistics statistics.cpp Min.cpp Max.cpp Mean.cpp Std.cpp)
set_target_properties(statistics PROPERTIES CXX_STANDARD 17 CXX_STANDARD_REQUIRED ON)

