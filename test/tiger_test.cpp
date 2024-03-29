#include "gtest/gtest.h"
#include "../src/zoo/animal/mammals/tiger/tiger.h"

class TigerTest : public ::testing::Test {
protected:
  TigerTest() {}
};

TEST_F(TigerTest, TigerConstructorWithParameter) {
  Point P(2, 2);
  Tiger Test(P, 100, false);
  ASSERT_EQ(Test.GetName(), "Tiger");
  ASSERT_EQ(Test.GetSkinType(), Animal::Fur);
  ASSERT_EQ(Test.GetReproduction(), Animal::Vivipar);
  ASSERT_TRUE(Test.IsValidHabitat(Habitat::LandHabitat));
  ASSERT_TRUE(Test.CalculateTotalMeat() > 0);
  ASSERT_TRUE(Test.CalculateTotalVegetable() == 0);
  ASSERT_TRUE(!Test.IsWild());
}

TEST_F(TigerTest, TigerInteraction) {
  Point P(2, 2);
  Tiger Test(P, 100, false);
  ASSERT_EQ(Test.Interact(),
            "The tiger is roaring. The sound that tiger produce is rawwrrrrr!");
}

TEST_F(TigerTest, WildTigerConstructorWithParameter) {
  Point P(2, 2);
  Tiger Test(P, 100, true);
  ASSERT_EQ(Test.GetName(), "Tiger");
  ASSERT_EQ(Test.GetSkinType(), Animal::Fur);
  ASSERT_EQ(Test.GetReproduction(), Animal::Vivipar);
  ASSERT_TRUE(Test.IsValidHabitat(Habitat::LandHabitat));
  ASSERT_TRUE(Test.CalculateTotalMeat() > 0);
  ASSERT_TRUE(Test.CalculateTotalVegetable() == 0);
  ASSERT_TRUE(Test.IsWild());
}