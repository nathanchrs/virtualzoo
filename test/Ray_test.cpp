#include "gtest/gtest.h"
#include "../src/Zoo/Animal/Pisces/Ray/Ray.h"

class RayTest : public ::testing::Test {
protected:
  RayTest() {}
};

TEST_F(RayTest, RayConstructorWithParameter) {
  Point P(2,2);
  Ray Test(P,100,false);
  ASSERT_EQ(Test.GetName(),"Ray");
  ASSERT_EQ(Test.GetSkinType(),Animal::Scales);
  ASSERT_EQ(Test.GetReproduction(),Animal::Ovipar);
  ASSERT_TRUE(Test.CalculateTotalMeat()>0);
  ASSERT_TRUE(Test.CalculateTotalVegetable()==0);
  ASSERT_TRUE(!Test.IsWild());
}

TEST_F(RayTest, RayInteraction) {
  Point P(2,2);
  Ray Test(P,100,false);
  ASSERT_EQ(Test.Interact(),"The ray is swimming as floating through the water");
}