cmake_minimum_required(VERSION 3.14)
project(my_project)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Enable coverage flags
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -O0 -fprofile-arcs -ftest-coverage")

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# Create an executable for your main.cpp
add_executable(
  main
  main.cpp
  sum.cpp
)

# Link GoogleTest to your test executable
add_executable(
  hello_test
  hello_test.cpp
  sum.cpp
)
target_link_libraries(
  hello_test
  gtest_main
)

# Include GoogleTest for test discovery
include(GoogleTest)
gtest_discover_tests(hello_test)

# Enable testing for the project
enable_testing()