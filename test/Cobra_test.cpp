#include "gtest/gtest.h"
#include "../src/Zoo/Animal/Reptile/Cobra/Cobra.h"

class CobraTest : public ::testing::Test {
protected:
    CobraTest() {}
};

TEST_F(CobraTest, CobraConstructorWithParameter) {
    Point P(2,2);
    Cobra Test(P,100,false);
    ASSERT_EQ(Test.GetName(),"Cobra");
    ASSERT_EQ(Test.GetSkinType(),Animal::Scales);
    ASSERT_EQ(Test.GetReproduction(),Animal::Ovipar);
    ASSERT_TRUE(Test.CalculateTotalMeat()>0);
    ASSERT_TRUE(Test.CalculateTotalVegetable()==0);
    ASSERT_TRUE(!Test.IsWild());
}

TEST_F(CobraTest, CobraInteraction) {
    Point P(2,2);
    Cobra Test(P,100,false);
    ASSERT_EQ(Test.interact(),"The cobra wag its tail and make some sizzle sound like 'Ssssttt!'");
}

TEST_F(CobraTest, WildCobraConstructorWithParameter) {
    Point P(2,2);
    Cobra Test(P,100,true);
    ASSERT_EQ(Test.GetName(),"Cobra");
    ASSERT_EQ(Test.GetSkinType(),Animal::Scales);
    ASSERT_EQ(Test.GetReproduction(),Animal::Ovipar);
    ASSERT_TRUE(Test.IsLandAnimal());
    ASSERT_TRUE(Test.IsCarnivore());
    ASSERT_TRUE(Test.CalculateTotalMeat()>0);
    ASSERT_TRUE(Test.CalculateTotalVegetable()==0);
    ASSERT_TRUE(Test.IsWild());
}