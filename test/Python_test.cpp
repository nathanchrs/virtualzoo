#include "gtest/gtest.h"
#include "../src/Zoo/Animal/Reptile/Python/Python.h"

class PythonTest : public ::testing::Test {
protected:
  PythonTest() {}
};

TEST_F(PythonTest, PythonConstructorWithParameter) {
  Point P(2, 2);
  Python Test(P, 100, false);
  ASSERT_EQ(Test.GetName(), "Python");
  ASSERT_EQ(Test.GetSkinType(), Animal::Scales);
  ASSERT_EQ(Test.GetReproduction(), Animal::Ovipar);
  ASSERT_TRUE(Test.CalculateTotalMeat() > 0);
  ASSERT_TRUE(Test.CalculateTotalVegetable() == 0);
  ASSERT_TRUE(!Test.IsWild());
}

TEST_F(PythonTest, PythonInteraction) {
  Point P(2, 2);
  Python Test(P, 100, false);
  ASSERT_EQ(Test.Interact(),
            "The python is squeezing a chicken that the zookeper gave");
}

TEST_F(PythonTest, WildPythonConstructorWithParameter) {
  Point P(2, 2);
  Python Test(P, 100, true);
  ASSERT_EQ(Test.GetName(), "Python");
  ASSERT_EQ(Test.GetSkinType(), Animal::Scales);
  ASSERT_EQ(Test.GetReproduction(), Animal::Ovipar);
  ASSERT_TRUE(Test.IsValidHabitat(Habitat::LandHabitat));
  ASSERT_TRUE(Test.CalculateTotalMeat() > 0);
  ASSERT_TRUE(Test.CalculateTotalVegetable() == 0);
  ASSERT_TRUE(Test.IsWild());
}