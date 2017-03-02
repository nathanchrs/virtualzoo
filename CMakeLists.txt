cmake_minimum_required(VERSION 2.8)
project(virtualzoo)

set(CMAKE_CXX_STANDARD 11)
enable_testing()

# Source files
set(SOURCE_FILES src/hello.cpp include/hello.h) # Add new source files here
add_executable(virtualzoo src/main.cpp ${SOURCE_FILES})

# Load Google Test settings
find_package(Threads REQUIRED)
if(NOT MSVC)
    set(PThreadLib -pthread)
endif()
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Test files
set(TEST_FILES test/hello_test.cpp) # Add new test files here
add_executable(virtualzoo_test test/test.cpp ${TEST_FILES} ${SOURCE_FILES})
target_link_libraries(virtualzoo_test ${PThreadLib} ${GTEST_BOTH_LIBRARIES})
GTEST_ADD_TESTS(virtualzoo_test "" test/test.cpp ${TEST_FILES} ${SOURCE_FILES})
