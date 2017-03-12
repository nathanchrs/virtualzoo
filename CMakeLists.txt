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
        src/Point/Point.h
        src/Animal/Diet/Diet.h
        src/Animal/Diet/Carnivore/Carnivore.cpp
        src/Animal/Diet/Carnivore/Carnivore.h
        src/Animal/Diet/Herbivore/Herbivore.cpp
        src/Animal/Diet/Herbivore/Herbivore.h
        src/Animal/Diet/Omnivore/Omnivore.cpp
        src/Animal/Diet/Omnivore/Omnivore.h
        src/Animal/Mammals/Orangutan/Orangutan.cpp
        src/Animal/Mammals/Orangutan/Orangutan.h
        src/Animal/Mammals/Gorilla/Gorilla.cpp
        src/Animal/Mammals/Gorilla/Gorilla.h
        src/Animal/Animal.cpp
        src/Animal/Animal.h
        src/Animal/Mammals/Leopard/Leopard.cpp
        src/Animal/Mammals/Leopard/Leopard.h
        src/Animal/Mammals/Lion/Lion.cpp
        src/Animal/Mammals/Lion/Lion.h
        src/Animal/Mammals/Tiger/Tiger.cpp
        src/Animal/Mammals/Tiger/Tiger.h
        src/Animal/Aves/Eagle/Eagle.cpp
        src/Animal/Aves/Eagle/Eagle.h
        src/Animal/Aves/Peacock/Peacock.cpp
        src/Animal/Aves/Peacock/Peacock.h
        src/Animal/Aves/Owl/Owl.cpp
        src/Animal/Aves/Owl/Owl.h
        src/Animal/Aves/Parrot/Parrot.cpp
        src/Animal/Aves/Parrot/Parrot.h
        src/Animal/Aves/Pigeon/Pigeon.cpp
        src/Animal/Aves/Pigeon/Pigeon.h
        src/Animal/Pisces/Barracuda/Barracuda.cpp
        src/Animal/Pisces/Barracuda/Barracuda.h
        src/Animal/Pisces/FrenchAngelFish/FrenchAngelFish.cpp
        src/Animal/Pisces/FrenchAngelFish/FrenchAngelFish.h
        src/Animal/Pisces/Lionfish/Lionfish.cpp
        src/Animal/Pisces/Lionfish/Lionfish.h
        src/Animal/Pisces/Ray/Ray.cpp
        src/Animal/Pisces/Ray/Ray.h
        src/Animal/Pisces/Seahorse/Seahorse.cpp
        src/Animal/Pisces/Seahorse/Seahorse.h
        src/Animal/Reptile/Chameleon/Chameleon.cpp
        src/Animal/Reptile/Chameleon/Chameleon.h
        src/Animal/Reptile/Cobra/Cobra.cpp
        src/Animal/Reptile/Cobra/Cobra.h
        src/Animal/Reptile/Iguana/Iguana.cpp
        src/Animal/Reptile/Iguana/Iguana.h
        src/Animal/Reptile/KomodoDragon/KomodoDragon.cpp
        src/Animal/Reptile/KomodoDragon/KomodoDragon.h
        src/Animal/Reptile/Python/Python.cpp
        src/Animal/Reptile/Python/Python.h
        src/Animal/Diet/Diet.cpp
        src/Cell/Cell.h
        src/Cell/Cell.cpp
        src/Cell/Habitat/AirHabitat/AirHabitat.cpp
        src/Cell/Habitat/AirHabitat/AirHabitat.h
        src/Cell/Habitat/LandHabitat/LandHabitat.cpp
        src/Cell/Habitat/LandHabitat/LandHabitat.h
        src/Cell/Habitat/WaterHabitat/WaterHabitat.cpp
        src/Cell/Habitat/WaterHabitat/WaterHabitat.h
        src/Cell/Facility/Facility.cpp
        src/Cell/Facility/Facility.h
        src/Cell/Facility/Park/Park.cpp
        src/Cell/Facility/Park/Park.h
        src/Cell/Facility/Restaurant/Restaurant.cpp
        src/Cell/Facility/Restaurant/Restaurant.h
        src/Cell/Facility/Road/Road.cpp
        src/Cell/Facility/Road/Road.h
        src/Cell/Facility/Road/Entrance/Entrance.cpp
        src/Cell/Facility/Road/Entrance/Entrance.h
        src/Cell/Facility/Road/Exit/Exit.cpp
        src/Cell/Facility/Road/Exit/Exit.h
        src/Cage/Cage.cpp
        src/Cage/Cage.h src/Animal/Behaviour/Behaviour.cpp src/Animal/Behaviour/Behaviour.h src/Animal/Behaviour/TameAnimal/TameAnimal.cpp src/Animal/Behaviour/TameAnimal/TameAnimal.h src/Animal/Behaviour/WildAnimal/WildAnimal.cpp src/Animal/Behaviour/WildAnimal/WildAnimal.h) # Add new source files here
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
        src/Animal/Mammals/Lion/Lion.cpp src/Animal/Mammals/Lion/Lion.h) # Add new test files here
add_executable(virtualzoo_test ${TEST_FILES} ${SOURCE_FILES})
target_link_libraries(virtualzoo_test ${PThreadLib} ${GTEST_BOTH_LIBRARIES})
GTEST_ADD_TESTS(virtualzoo_test "" ${TEST_FILES} ${SOURCE_FILES})
