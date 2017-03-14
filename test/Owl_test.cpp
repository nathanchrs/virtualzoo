#include "gtest/gtest.h"
#include "../src/Zoo/Animal/Aves/Owl/Owl.h"

class OwlTest : public ::testing::Test {
protected:
  OwlTest() {}
};

TEST_F(OwlTest, OwlConstructorWithParameter) {
  Point P(2,2);
  Owl Test(P,100,false);
  ASSERT_EQ(Test.GetName(),"Owl");
  ASSERT_EQ(Test.GetSkinType(),Animal::Feather);
  ASSERT_EQ(Test.GetReproduction(),Animal::Ovipar);
  ASSERT_TRUE(Test.CalculateTotalMeat()>0);
  ASSERT_TRUE(Test.CalculateTotalVegetable()==0);
  ASSERT_TRUE(!Test.IsWild());
}

TEST_F(OwlTest, OwlInteraction) {
  Point P(2,2);
  Owl Test(P,100,false);
  ASSERT_EQ(Test.Interact(),"Owls rotate their heads and make 'kuk kuk' sound");
}