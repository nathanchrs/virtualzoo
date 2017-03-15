#include <gtest/gtest.h>
#include "../src/renderer/point.h"
#include "../src/zoo/cell/road.h"

class RoadTest : public ::testing::Test {
protected:
  RoadTest() {}
};

TEST_F(RoadTest, RoadTestConstructor) {
  Point P(2, 2);
  Road R(P, true, true, true);
  ASSERT_EQ(R.GetPosition().GetC(), P.GetC());
  ASSERT_EQ(R.GetPosition().GetR(), P.GetR());
  ASSERT_TRUE(R.IsAccessible());
  ASSERT_TRUE(R.IsExit());
  ASSERT_TRUE(R.IsEntrance());
}

TEST_F(RoadTest, RoadTestMethod) {
  Point P(2, 2);
  Road R(P, true, true, true);
  ASSERT_TRUE(R.IsEntrance());
  ASSERT_TRUE(R.IsExit());
  ASSERT_TRUE(R.IsAccessible());
  R.SetEntrance(false);
  R.SetExit(false);
  ASSERT_FALSE(R.IsEntrance());
  ASSERT_FALSE(R.IsExit());
  char ch = R.Render();
  ASSERT_EQ('.', ch);
}

