#include "gtest/gtest.h"
#include "../src/Zoo/Animal/Pisces/Barracuda/Barracuda.h"

class BarracudaTest : public ::testing::Test {
protected:
  BarracudaTest() {}
};

TEST_F(BarracudaTest, BarracudaConstructorWithParameter) {
  Point P(2, 2);
  Barracuda Test(P, 100, false);
  ASSERT_EQ(Test.GetName(), "Barracuda");
  ASSERT_EQ(Test.GetSkinType(), Animal::Scales);
  ASSERT_EQ(Test.GetReproduction(), Animal::Ovipar);
  ASSERT_TRUE(Test.CalculateTotalMeat() > 0);
  ASSERT_TRUE(Test.CalculateTotalVegetable() == 0);
  ASSERT_TRUE(!Test.IsWild());
}

TEST_F(BarracudaTest, BarracudaInteraction) {
  Point P(2, 2);
  Barracuda Test(P, 100, false);
  ASSERT_EQ(Test.Interact(), "The barracuda is eating");
}

TEST_F(BarracudaTest, WildBarracudaConstructorWithParameter) {
  Point P(2, 2);
  Barracuda Test(P, 100, true);
  ASSERT_EQ(Test.GetName(), "Barracuda");
  ASSERT_EQ(Test.GetSkinType(), Animal::Scales);
  ASSERT_EQ(Test.GetReproduction(), Animal::Ovipar);
  ASSERT_TRUE(Test.IsValidHabitat(Habitat::WaterHabitat));
  ASSERT_TRUE(Test.CalculateTotalMeat() > 0);
  ASSERT_TRUE(Test.CalculateTotalVegetable() == 0);
  ASSERT_TRUE(Test.IsWild());
}