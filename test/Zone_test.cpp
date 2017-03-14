#include <gtest/gtest.h>
#include "../src/Zoo/Zone/Zone.h"
#include "../src/Zoo/Cell/Park.h"

class ZoneTest : public ::testing::Test {
protected:
  ZoneTest() {}
};

TEST_F(ZoneTest, ZoneTestConstructorWithParameter) {
  Zone Z("Park");
  ASSERT_EQ(Z.GetName(), "Park");
}

TEST_F(ZoneTest, ZoneTestMethod) {
  Zone Z("Park");
  ASSERT_EQ(Z.GetName(), "Park");
  Point P(2, 2);
  Cell *C = new Park(P, true);
  Z.AddCell(C);
  Z.SetName("Restaurant");
  ASSERT_EQ(Z.GetName(), "Restaurant");
  Array<Cell *> Arr;
  Arr = Z.GetCells();
  ASSERT_EQ(Arr.Size(), Z.GetCells().Size());
  ASSERT_EQ(Arr.Size(), Z.Size());
}