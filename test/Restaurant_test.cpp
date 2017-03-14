#include "gtest/gtest.h"
#include "../src/Zoo/Cell/Restaurant.h"

class RestaurantTest : public ::testing::Test {
protected:
  RestaurantTest() {}
};

TEST_F(RestaurantTest, RestaurantTestConstructor) {
  Point P(2, 2);
  Restaurant R(P, true);
  ASSERT_EQ(P.GetC(), R.GetPosition().GetC());
  ASSERT_EQ(P.GetR(), R.GetPosition().GetR());
  ASSERT_TRUE(R.IsAccessible());
}

TEST_F(RestaurantTest, RestaurantTestRender) {
  Point P(2, 2);
  Restaurant X(P, true);
  char ch = 'r';
  char ch2 = X.Render();
  ASSERT_EQ(ch2, ch);
}
