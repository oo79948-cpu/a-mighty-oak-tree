cmake_minimum_required(VERSION 3.24)

project(a_mighty_oak_tree)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

Include(FetchContent)

FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG        v3.8.1
)

FetchContent_MakeAvailable(Catch2)

add_executable(oak_tree_test tests/oak_tree_test.cpp src/oak_tree.cpp src/oak_tree.hpp)
add_executable(main main.cpp src/oak_tree.cpp)

target_link_libraries(oak_tree_test PRIVATE Catch2::Catch2WithMain)
