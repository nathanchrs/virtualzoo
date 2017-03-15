CC=g++
DEBUG=-g
CFLAGS=-Wall -c --std=c++11 $(DEBUG)
LDFLAGS=-Wall --std=c++11 $(DEBUG)

SOURCE_FILES= src/renderer/console_renderer/basic_console_renderer.cpp src/renderer/console_renderer/frame_buffer.cpp src/zoo/animal/aves/eagle/eagle.cpp src/zoo/animal/aves/peacock/peacock.cpp src/zoo/animal/aves/owl/owl.cpp src/zoo/animal/aves/parrot/parrot.cpp src/zoo/animal/aves/pigeon/pigeon.cpp src/zoo/animal/aves/aves.cpp src/zoo/animal/diet/carnivore/carnivore.cpp src/zoo/animal/diet/herbivore/herbivore.cpp src/zoo/animal/diet/omnivore/omnivore.cpp src/zoo/animal/mammals/gorilla/gorilla.cpp src/zoo/animal/mammals/leopard/leopard.cpp src/zoo/animal/mammals/lion/lion.cpp src/zoo/animal/mammals/orangutan/orangutan.cpp src/zoo/animal/mammals/tiger/tiger.cpp src/zoo/animal/mammals/mammals.cpp src/zoo/animal/pisces/barracuda/barracuda.cpp src/zoo/animal/pisces/french_angel_fish/french_angel_fish.cpp src/zoo/animal/pisces/lionfish/lionfish.cpp src/zoo/animal/pisces/ray/ray.cpp src/zoo/animal/pisces/seahorse/seahorse.cpp src/zoo/animal/pisces/pisces.cpp src/zoo/animal/reptile/chameleon/chameleon.cpp src/zoo/animal/reptile/cobra/cobra.cpp src/zoo/animal/reptile/iguana/iguana.cpp src/zoo/animal/reptile/komodo_dragon/komodo_dragon.cpp src/zoo/animal/reptile/python/python.cpp src/zoo/animal/reptile/reptile.cpp src/zoo/animal/animal.cpp src/zoo/zoo.cpp src/controller.cpp src/main.cpp
OBJECT_FILES=$(SOURCE_FILES:.cpp=.o)
EXECUTABLE=./main

TEST_FILES= src/renderer/console_renderer/basic_console_renderer.cpp src/renderer/console_renderer/frame_buffer.cpp src/zoo/animal/aves/eagle/eagle.cpp src/zoo/animal/aves/peacock/peacock.cpp src/zoo/animal/aves/owl/owl.cpp src/zoo/animal/aves/parrot/parrot.cpp src/zoo/animal/aves/pigeon/pigeon.cpp src/zoo/animal/aves/aves.cpp src/zoo/animal/diet/carnivore/carnivore.cpp src/zoo/animal/diet/herbivore/herbivore.cpp src/zoo/animal/diet/omnivore/omnivore.cpp src/zoo/animal/mammals/gorilla/gorilla.cpp src/zoo/animal/mammals/leopard/leopard.cpp src/zoo/animal/mammals/lion/lion.cpp src/zoo/animal/mammals/orangutan/orangutan.cpp src/zoo/animal/mammals/tiger/tiger.cpp src/zoo/animal/mammals/mammals.cpp src/zoo/animal/pisces/barracuda/barracuda.cpp src/zoo/animal/pisces/french_angel_fish/french_angel_fish.cpp src/zoo/animal/pisces/lionfish/lionfish.cpp src/zoo/animal/pisces/ray/ray.cpp src/zoo/animal/pisces/seahorse/seahorse.cpp src/zoo/animal/pisces/pisces.cpp src/zoo/animal/reptile/chameleon/chameleon.cpp src/zoo/animal/reptile/cobra/cobra.cpp src/zoo/animal/reptile/iguana/iguana.cpp src/zoo/animal/reptile/komodo_dragon/komodo_dragon.cpp src/zoo/animal/reptile/python/python.cpp src/zoo/animal/reptile/reptile.cpp src/zoo/animal/animal.cpp src/zoo/zoo.cpp src/controller.cpp test/zoo_test.cpp test/eagle_test.cpp test/owl_test.cpp test/chameleon_test.cpp test/cobra_test.cpp test/iguana_test.cpp test/komodo_dragon_test.cpp test/python_test.cpp test/gorilla_test.cpp test/leopard_test.cpp test/lion_test.cpp test/orangutan_test.cpp test/tiger_test.cpp test/parrot_test.cpp test/peacock_test.cpp test/pigeon_test.cpp test/barracuda_test.cpp test/french_angel_fish_test.cpp test/lionfish_test.cpp test/ray_test.cpp test/seahorse_test.cpp test/array_test.cpp test/habitat_test.cpp test/park_test.cpp test/restaurant_test.cpp test/road_test.cpp test/point_test.cpp test/zone_test.cpp test/cage_test.cpp test/frame_buffer_test.cpp test/controller_test.cpp test/test.cpp
TEST_OBJECT_FILES=$(TEST_FILES:.cpp=.o)
TEST_EXECUTABLE=./virtualzoo_test

.PHONY: all bin test lint exec doc clean

all: bin

bin: $(EXECUTABLE)

test: $(TEST_EXECUTABLE)

$(EXECUTABLE): $(OBJECT_FILES)
	$(CC) $(LDFLAGS) $(SOURCE_FILES) -o $@

$(TEST_EXECUTABLE): $(TEST_OBJECT_FILES)
	$(CC) $(LDFLAGS) $(TEST_FILES) -o $@ -pthread -lgtest_main -lgtest

%.o: %.cpp
	$(CC) $(CFLAGS) $< -o $@

doc:
	doxygen Doxyfile

lint:
	cppcheck .

exec:
	ulimit –t 3; ulimit –v 16384; /main

clean:
	-rm $(OBJECT_FILES)
	-rm $(EXECUTABLE)
	-rm $(TEST_OBJECT_FILES)
	-rm $(TEST_EXECUTABLE)
	-rm -rf docs/html
