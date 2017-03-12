//
// Created by alvin on 13/03/17.
//

#include "gtest/gtest.h"
#include "../src/Animal/Pisces/Barracuda/Barracuda.h"

class BarracudaTest : public ::testing::Test {
protected:
    BarracudaTest() {}
};

TEST_F(BarracudaTest, BarracudaConstructorWithParameter) {
    Barracuda Test(100);
    ASSERT_EQ(Test.getName(),"Barracuda");
    ASSERT_EQ(Test.getSkinType(),Animal::Scales);
    ASSERT_EQ(Test.getReproduction(),Animal::Ovipar);
    ASSERT_TRUE(Test.isWaterAnimal());
    ASSERT_TRUE(Test.IsCarnivore());
    ASSERT_TRUE(Test.calculateTotalMeat()>0);
    ASSERT_TRUE(Test.calculateTotalVegetable()==0);
    ASSERT_TRUE(!Test.isWild());
}

TEST_F(BarracudaTest, BarracudaInteraction) {
    Barracuda Test(100);
    ASSERT_EQ(Test.interact(),"The barracuda is eating");
}