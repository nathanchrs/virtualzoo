//
// Created by aegis on 12/03/17.
//

#include "gtest/gtest.h"
#include "../src/Animal/Mammals/WildTiger/WildTiger.h"

class WildTigerTest : public ::testing::Test {
protected:
    WildTigerTest() {}
};

TEST_F(WildTigerTest, WildTigerConstructorWithParameter) {
    WildTiger Test(100);
    ASSERT_EQ(Test.getName(),"WildTiger");
    ASSERT_EQ(Test.getSkinType(),Animal::Fur);
    ASSERT_EQ(Test.getReproduction(),Animal::Vivipar);
    ASSERT_TRUE(Test.isLandAnimal());
    ASSERT_TRUE(Test.IsCarnivore());
    ASSERT_TRUE(Test.calculateTotalMeat()>0);
    ASSERT_TRUE(Test.calculateTotalVegetable()==0);
    ASSERT_TRUE(Test.isWild());
}

TEST_F(WildTigerTest, WildTigerInteraction) {
    WildTiger Test(100);
    ASSERT_EQ(Test.interact(),"ROAR!");
}

