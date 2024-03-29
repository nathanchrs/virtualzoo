#include "gtest/gtest.h"
#include "../src/zoo/animal/reptile/chameleon/chameleon.h"

class ChameleonTest : public ::testing::Test {
protected:
  ChameleonTest() {}
};

TEST_F(ChameleonTest, ChameleonConstructorWithParameter) {
  Point P(2, 2);
  Chameleon Test(P, 100, false);
  ASSERT_EQ(Test.GetName(), "Chameleon");
  ASSERT_EQ(Test.GetSkinType(), Animal::Scales);
  ASSERT_EQ(Test.GetReproduction(), Animal::Ovipar);
  ASSERT_TRUE(Test.CalculateTotalMeat() > 0);
  ASSERT_TRUE(Test.CalculateTotalVegetable() == 0);
  ASSERT_TRUE(!Test.IsWild());
}

TEST_F(ChameleonTest, ChameleonInteraction) {
  Point P(2, 2);
  Chameleon Test(P, 100, false);
  ASSERT_EQ(Test.Interact(),
            "The chameleon is changing its color and its color become like leaf");
}

