#include "gtest/gtest.h"
#include "../src/zoo/animal/mammals/lion/lion.h"

class LionTest : public ::testing::Test {
protected:
  LionTest() {}
};

TEST_F(LionTest, LionConstructorWithParameter) {
  Point P(2, 2);
  Lion Test(P, 100, false);
  ASSERT_EQ(Test.GetName(), "Lion");
  ASSERT_EQ(Test.GetSkinType(), Animal::Fur);
  ASSERT_EQ(Test.GetReproduction(), Animal::Vivipar);
  ASSERT_TRUE(Test.CalculateTotalMeat() > 0);
  ASSERT_TRUE(Test.CalculateTotalVegetable() == 0);
  ASSERT_TRUE(!Test.IsWild());
}

TEST_F(LionTest, LionInteraction) {
  Point P(2, 2);
  Lion Test(P, 100, false);
  ASSERT_EQ(Test.Interact(), "The lion is yawning");
}

TEST_F(LionTest, WildLionConstructorWithParameter) {
  Point P(2, 2);
  Lion Test(P, 100, true);
  ASSERT_EQ(Test.GetName(), "Lion");
  ASSERT_EQ(Test.GetSkinType(), Animal::Fur);
  ASSERT_EQ(Test.GetReproduction(), Animal::Vivipar);
  ASSERT_TRUE(Test.IsValidHabitat(Habitat::LandHabitat));
  ASSERT_TRUE(Test.CalculateTotalMeat() > 0);
  ASSERT_TRUE(Test.CalculateTotalVegetable() == 0);
  ASSERT_TRUE(Test.IsWild());
}