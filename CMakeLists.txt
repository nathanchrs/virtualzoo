cmake_minimum_required(VERSION 2.8)
project(virtualzoo)

set(CMAKE_CXX_STANDARD 11)
enable_testing()

# Source files - add new source files here
SET(SOURCE_FILES
        src/Animalia/Aves/Aves.cpp
        src/Animalia/Aves/Aves.h
        src/Animalia/Mammals/Mammals.cpp
        src/Animalia/Mammals/Mammals.h
        src/Animalia/Pisces/Pisces.cpp
        src/Animalia/Pisces/Pisces.h
        src/Animalia/Reptile/Reptile.cpp
        src/Animalia/Reptile/Reptile.h
        src/Cell/Habitat/Habitat.cpp
        src/Cell/Habitat/Habitat.h
        src/Renderable/Renderable.h
        src/Zoo/Zoo.cpp
        src/Zoo/Zoo.h
        ) # Add new source files here
add_executable(virtualzoo src/main.cpp ${SOURCE_FILES})

# Load Google Test settings
find_package(Threads REQUIRED)
if(NOT MSVC)
    set(PThreadLib -pthread)
endif()
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Test files
SET(TEST_FILES
        test/test.cpp
        test/Zoo_test.cpp
        ) # Add new test files here
add_executable(virtualzoo_test ${TEST_FILES} ${SOURCE_FILES})
target_link_libraries(virtualzoo_test ${PThreadLib} ${GTEST_BOTH_LIBRARIES})
GTEST_ADD_TESTS(virtualzoo_test "" ${TEST_FILES} ${SOURCE_FILES})
