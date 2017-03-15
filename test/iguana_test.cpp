#include "gtest/gtest.h"
#include "../src/zoo/animal/reptile/iguana/iguana.h"

class IguanaTest : public ::testing::Test {
protected:
  IguanaTest() {}
};

TEST_F(IguanaTest, IguanaConstructorWithParameter) {
  Point P(2, 2);
  Iguana Test(P, 100, false);
  ASSERT_EQ(Test.GetName(), "Iguana");
  ASSERT_EQ(Test.GetSkinType(), Animal::Scales);
  ASSERT_EQ(Test.GetReproduction(), Animal::Ovipar);
  ASSERT_TRUE(Test.CalculateTotalMeat() > 0);
  ASSERT_TRUE(Test.CalculateTotalVegetable() > 0);
  ASSERT_TRUE(!Test.IsWild());
}

TEST_F(IguanaTest, IguanaInteraction) {
  Point P(2, 2);
  Iguana Test(P, 100, false);
  ASSERT_EQ(Test.Interact(), "The iguana is climbing a tree");
}

