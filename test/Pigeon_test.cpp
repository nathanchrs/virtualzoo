#include "gtest/gtest.h"
#include "../src/Zoo/Animal/Aves/Pigeon/Pigeon.h"

class PigeonTest : public ::testing::Test {
protected:
  PigeonTest() {}
};

TEST_F(PigeonTest, PigeonConstructorWithParameter) {
  Point P(2, 2);
  Pigeon Test(P, 100, false);
  ASSERT_EQ(Test.GetName(), "Pigeon");
  ASSERT_EQ(Test.GetSkinType(), Animal::Feather);
  ASSERT_EQ(Test.GetReproduction(), Animal::Ovipar);
  ASSERT_TRUE(Test.CalculateTotalMeat() == 0);
  ASSERT_TRUE(Test.CalculateTotalVegetable() > 0);
  ASSERT_TRUE(!Test.IsWild());
}

TEST_F(PigeonTest, PigeonInteraction) {
  Point P(2, 2);
  Pigeon Test(P, 100, false);
  ASSERT_EQ(Test.Interact(),
            "The pigeon is eating its food that a visitor gave.");
}