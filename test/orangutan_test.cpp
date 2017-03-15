#include "gtest/gtest.h"
#include "../src/Zoo/Animal/Mammals/Orangutan/Orangutan.h"

class OrangutanTest : public ::testing::Test {
protected:
  OrangutanTest() {}
};

TEST_F(OrangutanTest, OrangutanConstructorWithParameter) {
  Point P(2, 2);
  Orangutan Test(P, 100, false);
  ASSERT_EQ(Test.GetName(), "Orangutan");
  ASSERT_EQ(Test.GetSkinType(), Animal::Fur);
  ASSERT_EQ(Test.GetReproduction(), Animal::Vivipar);
  ASSERT_TRUE(Test.CalculateTotalMeat() > 0);
  ASSERT_TRUE(Test.CalculateTotalVegetable() > 0);
  ASSERT_TRUE(!Test.IsWild());
}

TEST_F(OrangutanTest, OrangutanInteraction) {
  Point P(2, 2);
  Orangutan Test(P, 100, false);
  ASSERT_EQ(Test.Interact(),
            "The orangutan is hanging around the trees, picking every fruits"
                " and eating them");
}