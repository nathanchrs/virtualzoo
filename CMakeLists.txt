cmake_minimum_required(VERSION 2.8)
project(virtualzoo)

set(CMAKE_CXX_STANDARD 11)
enable_testing()

# Source files
SET(SOURCE_FILES
        src/Animal/Aves/Aves.cpp
        src/Animal/Aves/Aves.h
        src/Animal/Mammals/Mammals.cpp
        src/Animal/Mammals/Mammals.h
        src/Animal/Pisces/Pisces.cpp
        src/Animal/Pisces/Pisces.h
        src/Animal/Reptile/Reptile.cpp
        src/Animal/Reptile/Reptile.h
        src/Cell/Habitat/Habitat.cpp
        src/Cell/Habitat/Habitat.h
        src/Renderable/Renderable.h
        src/Zoo/Zoo.cpp
        src/Zoo/Zoo.h
        src/Point/Point.cpp
        src/Point/Point.h src/Animal/Diet/Diet.h src/Animal/Diet/Carnivore/Carnivore.cpp src/Animal/Diet/Carnivore/Carnivore.h src/Animal/Diet/Herbivore/Herbivore.cpp src/Animal/Diet/Herbivore/Herbivore.h src/Animal/Diet/Omnivore/Omnivore.cpp src/Animal/Diet/Omnivore/Omnivore.h src/Animal/Mammals/OrangUtan/Orangutan.cpp src/Animal/Mammals/OrangUtan/Orangutan.h) # Add new source files here
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
