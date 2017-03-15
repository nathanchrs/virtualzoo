#include "gtest/gtest.h"
#include "../src/Zoo/Cell/Park.h"

class ParkTest : public ::testing::Test {
protected:
  ParkTest() {}
};

TEST_F(ParkTest, ParkTestConstructorWithParameter) {
  Point P(2, 2);
  Park X(P, true);
  ASSERT_EQ(P.GetC(), X.GetPosition().GetC());
  ASSERT_EQ(P.GetR(), X.GetPosition().GetR());
  ASSERT_TRUE(X.IsAccessible());
}

TEST_F(ParkTest, ParkTestRender) {
  Point P(2, 2);
  Park X(P, true);
  char ch = 'p';
  char ch2 = X.Render();
  ASSERT_EQ(ch2, ch);
}