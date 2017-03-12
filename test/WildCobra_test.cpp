//
// Created by aegis on 12/03/17.
//

#include "gtest/gtest.h"
#include "../src/Animal/Reptile/WildCobra/WildCobra.h"

class WildCobraTest : public ::testing::Test {
protected:
    WildCobraTest() {}
};

TEST_F(WildCobraTest, WildCobraConstructorWithParameter) {
    WildCobra Test(100);
    ASSERT_EQ(Test.getName(),"WildCobra");
    ASSERT_EQ(Test.getSkinType(),Animal::Scales);
    ASSERT_EQ(Test.getReproduction(),Animal::Ovipar);
    ASSERT_TRUE(Test.isLandAnimal());
    ASSERT_TRUE(Test.IsCarnivore());
    ASSERT_TRUE(Test.calculateTotalMeat()>0);
    ASSERT_TRUE(Test.calculateTotalVegetable()==0);
    ASSERT_TRUE(Test.isWild());
}

TEST_F(WildCobraTest, WildCobraInteraction) {
    WildCobra Test(100);
    ASSERT_EQ(Test.interact(),"SSHHH!");
}

