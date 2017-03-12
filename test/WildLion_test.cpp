//
// Created by aegis on 12/03/17.
//

#include "gtest/gtest.h"
#include "../src/Animal/Mammals/WildLion/WildLion.h"

class WildLionTest : public ::testing::Test {
protected:
    WildLionTest() {}
};

TEST_F(WildLionTest, WildLionConstructorWithParameter) {
    WildLion Test(100);
    ASSERT_EQ(Test.getName(),"WildLion");
    ASSERT_EQ(Test.getSkinType(),Animal::Fur);
    ASSERT_EQ(Test.getReproduction(),Animal::Vivipar);
    ASSERT_TRUE(Test.isLandAnimal());
    ASSERT_TRUE(Test.IsCarnivore());
    ASSERT_TRUE(Test.calculateTotalMeat()>0);
    ASSERT_TRUE(Test.calculateTotalVegetable()==0);
    ASSERT_TRUE(Test.isWild());
}

TEST_F(WildLionTest, WildLionInteraction) {
    WildLion Test(100);
    ASSERT_EQ(Test.interact(),"ROAR!");
}

