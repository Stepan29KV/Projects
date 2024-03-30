cmake_minimum_required(VERSION 3.8)

project(06.homework)

add_executable(containers main.cpp)
set_target_properties(containers PROPERTIES CXX_STANDARD 17 CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)

# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

# add_executable(
#   container_test
# #   seqContainer_test.cc
#   list_container_test.cc)


add_executable(
  container_test
  seqContainer_test.cc
  listContainer_test.cc
)
target_link_libraries(
    container_test
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(container_test)
