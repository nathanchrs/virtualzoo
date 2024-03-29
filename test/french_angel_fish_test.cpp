#include "gtest/gtest.h"
#include "../src/zoo/animal/pisces/french_angel_fish/french_angel_fish.h"

class FrenchAngelFishTest : public ::testing::Test {
protected:
  FrenchAngelFishTest() {}
};

TEST_F(FrenchAngelFishTest, FrenchAngelFishConstructorWithParameter) {
  Point P(2, 2);
  FrenchAngelFish Test(P, 100, false);
  ASSERT_EQ(Test.GetName(), "FrenchAngelFish");
  ASSERT_EQ(Test.GetSkinType(), Animal::Scales);
  ASSERT_EQ(Test.GetReproduction(), Animal::Ovipar);
  ASSERT_TRUE(Test.CalculateTotalMeat() == 0);
  ASSERT_TRUE(Test.CalculateTotalVegetable() > 0);
  ASSERT_TRUE(!Test.IsWild());
}

TEST_F(FrenchAngelFishTest, FrenchAngelFishInteraction) {
  Point P(2, 2);
  FrenchAngelFish Test(P, 100, false);
  ASSERT_EQ(Test.Interact(), "Splash! It is swimming");
}