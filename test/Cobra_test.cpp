//
// Created by aegis on 12/03/17.
//

#include "gtest/gtest.h"
#include "../src/Animal/Reptile/Cobra/Cobra.h"

class CobraTest : public ::testing::Test {
protected:
    CobraTest() {}
};

TEST_F(CobraTest, CobraConstructorWithParameter) {
    Cobra Test(100);
    ASSERT_EQ(Test.getName(),"Cobra");
    ASSERT_EQ(Test.getSkinType(),Animal::Scales);
    ASSERT_EQ(Test.getReproduction(),Animal::Ovipar);
    ASSERT_TRUE(Test.isLandAnimal());
    ASSERT_TRUE(Test.IsCarnivore());
    ASSERT_TRUE(Test.calculateTotalMeat()>0);
    ASSERT_TRUE(Test.calculateTotalVegetable()==0);
    ASSERT_TRUE(!Test.isWild());
}

TEST_F(CobraTest, CobraInteraction) {
    Cobra Test(100);
    ASSERT_EQ(Test.interact(),"The cobra wag its tail and make some sizzle sound like 'Ssssttt!'");
}