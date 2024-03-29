#include <gtest/gtest.h>
#include "../src/zoo/zone/cage.h"
#include "../src/zoo/animal/mammals/gorilla/gorilla.h"

class CageTest : public ::testing::Test {
protected:
  CageTest() {}
};

TEST_F(CageTest, CageTestConstructorWithParameter) {
  Cage C("W");
  ASSERT_EQ(C.GetName(), "W");
}

TEST_F(CageTest, CageTestMethod) {
  Cage C("W");
  Point P(2, 2);

  Animal *A = new Gorilla(P, 30, true);
  Cell *H = new Habitat(P, Habitat::LandHabitat);

  C.AddCell(H);
  C.AddCell(H);
  C.AddCell(H);
  C.AddCell(H);
  C.AddAnimal(A);
  Array<Animal *> Arr;
  Arr = C.GetAnimals();
  ASSERT_EQ(Arr.Size(), C.GetAnimals().Size());
  C.AddAnimal(A);
  ASSERT_TRUE(C.IsFull());
}