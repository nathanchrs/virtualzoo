#include "gtest/gtest.h"
#include "../src/zoo/animal/mammals/gorilla/gorilla.h"

class GorillaTest : public ::testing::Test {
protected:
  GorillaTest() {}
};

TEST_F(GorillaTest, GorillaConstructorWithParameter) {
  Point P(2, 2);
  Gorilla Test(P, 100, false);
  ASSERT_EQ(Test.GetName(), "Gorilla");
  ASSERT_EQ(Test.GetSkinType(), Animal::Fur);
  ASSERT_EQ(Test.GetReproduction(), Animal::Vivipar);
  ASSERT_TRUE(Test.CalculateTotalMeat() == 0);
  ASSERT_TRUE(Test.CalculateTotalVegetable() > 0);
  ASSERT_TRUE(!Test.IsWild());
}

TEST_F(GorillaTest, GorillaInteraction) {
  Point P(2, 2);
  Gorilla Test(P, 100, false);
  ASSERT_EQ(Test.Interact(), "The gorilla is playing with its toy");
}

