//
// Created by aegis on 12/03/17.
//

#include "gtest/gtest.h"
#include "../src/Zoo/Animal/Mammals/Lion/Lion.h"

class LionTest : public ::testing::Test {
protected:
    LionTest() {}
};

TEST_F(LionTest, LionConstructorWithParameter) {
    Point P(2,2);
    Lion Test(P,100,false);
    ASSERT_EQ(Test.getName(),"Lion");
    ASSERT_EQ(Test.getSkinType(),Animal::Fur);
    ASSERT_EQ(Test.getReproduction(),Animal::Vivipar);
    ASSERT_TRUE(Test.isLandAnimal());
    ASSERT_TRUE(Test.IsCarnivore());
    ASSERT_TRUE(Test.calculateTotalMeat()>0);
    ASSERT_TRUE(Test.calculateTotalVegetable()==0);
    ASSERT_TRUE(!Test.IsWild());
}

TEST_F(LionTest, LionInteraction) {
    Point P(2,2);
    Lion Test(P,100,false);
    ASSERT_EQ(Test.interact(),"The lion is yawning");
}

TEST_F(LionTest, WildLionConstructorWithParameter) {
    Point P(2,2);
    Lion Test(P,100,true);
    ASSERT_EQ(Test.getName(),"Lion");
    ASSERT_EQ(Test.getSkinType(),Animal::Fur);
    ASSERT_EQ(Test.getReproduction(),Animal::Vivipar);
    ASSERT_TRUE(Test.isLandAnimal());
    ASSERT_TRUE(Test.IsCarnivore());
    ASSERT_TRUE(Test.calculateTotalMeat()>0);
    ASSERT_TRUE(Test.calculateTotalVegetable()==0);
    ASSERT_TRUE(Test.IsWild());
}