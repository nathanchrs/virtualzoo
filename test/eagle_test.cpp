#include "gtest/gtest.h"
#include "../src/zoo/animal/aves/eagle/eagle.h"

class EagleTest : public ::testing::Test {
protected:
  EagleTest() {}
};

TEST_F(EagleTest, EagleConstructorWithParameter) {
  Point P(2, 2);
  Eagle Test(P, 100, false);
  ASSERT_EQ(Test.GetName(), "Eagle");
  ASSERT_EQ(Test.GetSkinType(), Animal::Feather);
  ASSERT_EQ(Test.GetReproduction(), Animal::Ovipar);
  ASSERT_TRUE(Test.CalculateTotalMeat() > 0);
  ASSERT_TRUE(Test.CalculateTotalVegetable() == 0);
  ASSERT_TRUE(!Test.IsWild());
}

TEST_F(EagleTest, EagleInteraction) {
  Point P(2, 2);
  Eagle Test(P, 100, false);
  ASSERT_EQ(Test.Interact(),
            "The eagle is eating its food that the zoo keeper gave");
}

TEST_F(EagleTest, WildEagleConstructorWithParameter) {
  Point P(2, 2);
  Eagle Test(P, 100, true);
  ASSERT_EQ(Test.GetName(), "Eagle");
  ASSERT_EQ(Test.GetSkinType(), Animal::Feather);
  ASSERT_EQ(Test.GetReproduction(), Animal::Ovipar);
  ASSERT_TRUE(Test.IsValidHabitat(Habitat::AirHabitat));
  ASSERT_TRUE(Test.CalculateTotalMeat() > 0);
  ASSERT_TRUE(Test.CalculateTotalVegetable() == 0);
  ASSERT_TRUE(Test.IsWild());
}