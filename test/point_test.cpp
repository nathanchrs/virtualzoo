#include <gtest/gtest.h>
#include "../src/renderer/point.h"

class PointTest : public ::testing::Test {
protected:
  PointTest() {}
};

TEST_F(PointTest, PointTestConstructor) {
  Point P;
  Point P2(2, 2);
  ASSERT_EQ(P.GetC(), 0);
  ASSERT_EQ(P.GetR(), 0);
  ASSERT_EQ(P2.GetC(), 2);
  ASSERT_EQ(P2.GetR(), 2);
}

TEST_F(PointTest, PointTestMethod) {
  Point P;
  Point P2(2, 2);
  ASSERT_EQ(P.GetC(), 0);
  ASSERT_EQ(P.GetR(), 0);
  ASSERT_EQ(P2.GetC(), 2);
  ASSERT_EQ(P2.GetR(), 2);
  P2.SetC(3);
  P2.SetR(3);
  ASSERT_EQ(P2.GetC(), 3);
  ASSERT_EQ(P2.GetR(), 3);
  ASSERT_TRUE(P2.InArea(4, 4));
  ASSERT_FALSE(P2.InArea(3, 3));
  P = P2 + P2;
  ASSERT_EQ(P.GetC(), 6);
  ASSERT_EQ(P.GetR(), 6);
  P = P2 - P2;
  ASSERT_EQ(P.GetR(), 0);
  ASSERT_EQ(P.GetC(), 0);
  ASSERT_FALSE(P == P2);
  ASSERT_TRUE(P != P2);
}