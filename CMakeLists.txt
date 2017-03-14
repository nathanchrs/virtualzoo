cmake_minimum_required(VERSION 2.8)
project(virtualzoo)

set(CMAKE_CXX_STANDARD 11)
enable_testing()

# Source files
SET(SOURCE_FILES
        src/Array/Array.h

        src/Renderer/ConsoleRenderer/BasicConsoleRenderer.h
        src/Renderer/ConsoleRenderer/BasicConsoleRenderer.cpp
        src/Renderer/ConsoleRenderer/FrameBuffer.h
        src/Renderer/ConsoleRenderer/FrameBuffer.cpp
        src/Renderer/Point.h
        src/Renderer/Renderable.h
        src/Renderer/Renderer.h

        src/Zoo/Animal/Aves/Eagle/Eagle.cpp
        src/Zoo/Animal/Aves/Eagle/Eagle.h
        src/Zoo/Animal/Aves/Peacock/Peacock.cpp
        src/Zoo/Animal/Aves/Peacock/Peacock.h
        src/Zoo/Animal/Aves/Owl/Owl.cpp
        src/Zoo/Animal/Aves/Owl/Owl.h
        src/Zoo/Animal/Aves/Parrot/Parrot.cpp
        src/Zoo/Animal/Aves/Parrot/Parrot.h
        src/Zoo/Animal/Aves/Pigeon/Pigeon.cpp
        src/Zoo/Animal/Aves/Pigeon/Pigeon.h
        src/Zoo/Animal/Aves/Aves.cpp
        src/Zoo/Animal/Aves/Aves.h

        src/Zoo/Animal/Diet/Carnivore/Carnivore.cpp
        src/Zoo/Animal/Diet/Carnivore/Carnivore.h
        src/Zoo/Animal/Diet/Herbivore/Herbivore.cpp
        src/Zoo/Animal/Diet/Herbivore/Herbivore.h
        src/Zoo/Animal/Diet/Omnivore/Omnivore.cpp
        src/Zoo/Animal/Diet/Omnivore/Omnivore.h
        src/Zoo/Animal/Diet/Diet.h

        src/Zoo/Animal/Mammals/Gorilla/Gorilla.cpp
        src/Zoo/Animal/Mammals/Gorilla/Gorilla.h
        src/Zoo/Animal/Mammals/Leopard/Leopard.cpp
        src/Zoo/Animal/Mammals/Leopard/Leopard.h
        src/Zoo/Animal/Mammals/Lion/Lion.cpp
        src/Zoo/Animal/Mammals/Lion/Lion.h
        src/Zoo/Animal/Mammals/Orangutan/Orangutan.cpp
        src/Zoo/Animal/Mammals/Orangutan/Orangutan.h
        src/Zoo/Animal/Mammals/Tiger/Tiger.cpp
        src/Zoo/Animal/Mammals/Tiger/Tiger.h
        src/Zoo/Animal/Mammals/Mammals.cpp
        src/Zoo/Animal/Mammals/Mammals.h

        src/Zoo/Animal/Pisces/Barracuda/Barracuda.cpp
        src/Zoo/Animal/Pisces/Barracuda/Barracuda.h
        src/Zoo/Animal/Pisces/FrenchAngelFish/FrenchAngelFish.cpp
        src/Zoo/Animal/Pisces/FrenchAngelFish/FrenchAngelFish.h
        src/Zoo/Animal/Pisces/Lionfish/Lionfish.cpp
        src/Zoo/Animal/Pisces/Lionfish/Lionfish.h
        src/Zoo/Animal/Pisces/Ray/Ray.cpp
        src/Zoo/Animal/Pisces/Ray/Ray.h
        src/Zoo/Animal/Pisces/Seahorse/Seahorse.cpp
        src/Zoo/Animal/Pisces/Seahorse/Seahorse.h
        src/Zoo/Animal/Pisces/Pisces.cpp
        src/Zoo/Animal/Pisces/Pisces.h

        src/Zoo/Animal/Reptile/Chameleon/Chameleon.cpp
        src/Zoo/Animal/Reptile/Chameleon/Chameleon.h
        src/Zoo/Animal/Reptile/Cobra/Cobra.cpp
        src/Zoo/Animal/Reptile/Cobra/Cobra.h
        src/Zoo/Animal/Reptile/Iguana/Iguana.cpp
        src/Zoo/Animal/Reptile/Iguana/Iguana.h
        src/Zoo/Animal/Reptile/KomodoDragon/KomodoDragon.cpp
        src/Zoo/Animal/Reptile/KomodoDragon/KomodoDragon.h
        src/Zoo/Animal/Reptile/Python/Python.cpp
        src/Zoo/Animal/Reptile/Python/Python.h
        src/Zoo/Animal/Reptile/Reptile.cpp
        src/Zoo/Animal/Reptile/Reptile.h

        src/Zoo/Animal/Animal.cpp
        src/Zoo/Animal/Animal.h

        src/Zoo/Zone/Zone.h
        src/Zoo/Zone/Cage.h

        src/Zoo/Cell/Cell.h
        src/Zoo/Cell/Habitat.h
        src/Zoo/Cell/Park.h
        src/Zoo/Cell/Restaurant.h
        src/Zoo/Cell/Road.h

        src/Zoo/Zoo.cpp
        src/Zoo/Zoo.h

        src/Controller.cpp src/Controller.h) # Add new source files here
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
        test/Eagle_test.cpp
        test/Owl_test.cpp
        test/Chameleon_test.cpp
        test/Cobra_test.cpp
        test/Iguana_test.cpp
        test/KomodoDragon_test.cpp
        test/Python_test.cpp
        test/Gorilla_test.cpp
        test/Leopard_test.cpp
        test/Lion_test.cpp
        test/Orangutan_test.cpp
        test/Tiger_test.cpp
        test/Parrot_test.cpp
        test/Peacock_test.cpp
        test/Pigeon_test.cpp
        test/Barracuda_test.cpp
        test/FrenchAngelFish_test.cpp
        test/Lionfish_test.cpp
        test/Ray_test.cpp
        test/Seahorse_test.cpp
        test/Array_test.cpp
        test/Habitat_test.cpp test/Park_test.cpp test/Restaurant_test.cpp test/Road_test.cpp test/Point_test.cpp test/Zone_test.cpp test/Cage_test.cpp test/FrameBuffer_test.cpp test/Controller_test.cpp) # Add new test files here

add_executable(virtualzoo_test ${TEST_FILES} ${SOURCE_FILES})
target_link_libraries(virtualzoo_test ${PThreadLib} ${GTEST_BOTH_LIBRARIES})
GTEST_ADD_TESTS(virtualzoo_test "" ${TEST_FILES} ${SOURCE_FILES})
