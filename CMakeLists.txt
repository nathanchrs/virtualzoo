cmake_minimum_required(VERSION 2.8)
project(virtualzoo)

set(CMAKE_CXX_STANDARD 11)
enable_testing()

# Source files
SET(SOURCE_FILES
        src/array/array.h

        src/renderer/console_renderer/basic_console_renderer.h
        src/renderer/console_renderer/basic_console_renderer.cpp
        src/renderer/console_renderer/frame_buffer.h
        src/renderer/console_renderer/frame_buffer.cpp
        src/renderer/point.h
        src/renderer/renderable.h
        src/renderer/renderer.h

        src/zoo/animal/aves/eagle/eagle.cpp
        src/zoo/animal/aves/eagle/eagle.h
        src/zoo/animal/aves/peacock/peacock.cpp
        src/zoo/animal/aves/peacock/peacock.h
        src/zoo/animal/aves/owl/owl.cpp
        src/zoo/animal/aves/owl/owl.h
        src/zoo/animal/aves/parrot/parrot.cpp
        src/zoo/animal/aves/parrot/parrot.h
        src/zoo/animal/aves/pigeon/pigeon.cpp
        src/zoo/animal/aves/pigeon/pigeon.h
        src/zoo/animal/aves/aves.cpp
        src/zoo/animal/aves/aves.h

        src/zoo/animal/diet/carnivore/carnivore.cpp
        src/zoo/animal/diet/carnivore/carnivore.h
        src/zoo/animal/diet/herbivore/herbivore.cpp
        src/zoo/animal/diet/herbivore/herbivore.h
        src/zoo/animal/diet/omnivore/omnivore.cpp
        src/zoo/animal/diet/omnivore/omnivore.h
        src/zoo/animal/diet/diet.h

        src/zoo/animal/mammals/gorilla/gorilla.cpp
        src/zoo/animal/mammals/gorilla/gorilla.h
        src/zoo/animal/mammals/leopard/leopard.cpp
        src/zoo/animal/mammals/leopard/leopard.h
        src/zoo/animal/mammals/lion/lion.cpp
        src/zoo/animal/mammals/lion/lion.h
        src/zoo/animal/mammals/orangutan/orangutan.cpp
        src/zoo/animal/mammals/orangutan/orangutan.h
        src/zoo/animal/mammals/tiger/tiger.cpp
        src/zoo/animal/mammals/tiger/tiger.h
        src/zoo/animal/mammals/mammals.cpp
        src/zoo/animal/mammals/mammals.h

        src/zoo/animal/pisces/barracuda/barracuda.cpp
        src/zoo/animal/pisces/barracuda/barracuda.h
        src/zoo/animal/pisces/french_angel_fish/french_angel_fish.cpp
        src/zoo/animal/pisces/french_angel_fish/french_angel_fish.h
        src/zoo/animal/pisces/lionfish/lionfish.cpp
        src/zoo/animal/pisces/lionfish/lionfish.h
        src/zoo/animal/pisces/ray/ray.cpp
        src/zoo/animal/pisces/ray/ray.h
        src/zoo/animal/pisces/seahorse/seahorse.cpp
        src/zoo/animal/pisces/seahorse/seahorse.h
        src/zoo/animal/pisces/pisces.cpp
        src/zoo/animal/pisces/pisces.h

        src/zoo/animal/reptile/chameleon/chameleon.cpp
        src/zoo/animal/reptile/chameleon/chameleon.h
        src/zoo/animal/reptile/cobra/cobra.cpp
        src/zoo/animal/reptile/cobra/cobra.h
        src/zoo/animal/reptile/iguana/iguana.cpp
        src/zoo/animal/reptile/iguana/iguana.h
        src/zoo/animal/reptile/komodo_dragon/komodo_dragon.cpp
        src/zoo/animal/reptile/komodo_dragon/komodo_dragon.h
        src/zoo/animal/reptile/python/python.cpp
        src/zoo/animal/reptile/python/python.h
        src/zoo/animal/reptile/reptile.cpp
        src/zoo/animal/reptile/reptile.h

        src/zoo/animal/animal.cpp
        src/zoo/animal/animal.h

        src/zoo/zone/zone.h
        src/zoo/zone/cage.h

        src/zoo/cell/cell.h
        src/zoo/cell/habitat.h
        src/zoo/cell/park.h
        src/zoo/cell/restaurant.h
        src/zoo/cell/road.h

        src/zoo/zoo.cpp
        src/zoo/zoo.h

        src/controller.cpp
        src/controller.h) # Add new source files here
add_executable(main src/main.cpp ${SOURCE_FILES})

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
        test/zoo_test.cpp
        test/eagle_test.cpp
        test/owl_test.cpp
        test/chameleon_test.cpp
        test/cobra_test.cpp
        test/iguana_test.cpp
        test/komodo_dragon_test.cpp
        test/python_test.cpp
        test/gorilla_test.cpp
        test/leopard_test.cpp
        test/lion_test.cpp
        test/orangutan_test.cpp
        test/tiger_test.cpp
        test/parrot_test.cpp
        test/peacock_test.cpp
        test/pigeon_test.cpp
        test/barracuda_test.cpp
        test/french_angel_fish_test.cpp
        test/lionfish_test.cpp
        test/ray_test.cpp
        test/seahorse_test.cpp
        test/array_test.cpp
        test/habitat_test.cpp
        test/park_test.cpp
        test/restaurant_test.cpp
        test/road_test.cpp
        test/point_test.cpp
        test/zone_test.cpp
        test/cage_test.cpp
        test/frame_buffer_test.cpp
        test/controller_test.cpp
    ) # Add new test files here

add_executable(virtualzoo_test ${TEST_FILES} ${SOURCE_FILES})
target_link_libraries(virtualzoo_test ${PThreadLib} ${GTEST_BOTH_LIBRARIES})
GTEST_ADD_TESTS(virtualzoo_test "" ${TEST_FILES} ${SOURCE_FILES})
