#include "../src/zoo/zoo.h"
#include "gtest/gtest.h"
#include "../src/zoo/animal/mammals/gorilla/gorilla.h"

class ZooTest : public ::testing::Test {
protected:
  ZooTest() {}
};

TEST_F(ZooTest, ZooConstructor) {
  Zoo zoo(20, 20);
  ASSERT_TRUE(&zoo != NULL);
  ASSERT_EQ(zoo.GetRows(), 20);
  ASSERT_EQ(zoo.GetCols(), 20);
  Point P(2, 2);
  Cage Z("l");
  zoo.AddZone(Z);
  Habitat H(P, Habitat::LandHabitat);
  zoo.AddCell(H, "l");
  zoo.AddCell(H, "l");
  zoo.AddCell(H, "l");
  zoo.AddCell(H, "l");
  zoo.AddCell(H, "l");
  zoo.AddCell(H, "l");
  zoo.AddCell(H, "l");
  zoo.AddCell(H, "l");
  Gorilla G(P, 20, false);
  zoo.AddAnimal(G, "l");
  zoo.AddAnimal(G, "l");
  Array<Cell *> Arr = zoo.GetCells();
  Array<Zone *> Arr2 = zoo.GetZones();
  ASSERT_EQ(Arr.Size(), zoo.GetCells().Size());
  ASSERT_EQ(Arr2.Size(), zoo.GetZones().Size());
  ASSERT_EQ(10, zoo.CalculateTotalVegetable());
  ASSERT_EQ(0, zoo.CalculateTotalMeat());
}

