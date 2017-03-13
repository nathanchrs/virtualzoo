//
// Created by alvin on 13/03/17.
//

#include "gtest/gtest.h"
#include "../src/Zoo/Animal/Pisces/Barracuda/Barracuda.h"

class BarracudaTest : public ::testing::Test {
protected:
    BarracudaTest() {}
};

TEST_F(BarracudaTest, BarracudaConstructorWithParameter) {
    Point P(2,2);
    Barracuda Test(P,100,false);
    ASSERT_EQ(Test.getName(),"Barracuda");
    ASSERT_EQ(Test.getSkinType(),Animal::Scales);
    ASSERT_EQ(Test.getReproduction(),Animal::Ovipar);
    ASSERT_TRUE(Test.isWaterAnimal());
    ASSERT_TRUE(Test.IsCarnivore());
    ASSERT_TRUE(Test.calculateTotalMeat()>0);
    ASSERT_TRUE(Test.calculateTotalVegetable()==0);
    ASSERT_TRUE(!Test.IsWild());
}

TEST_F(BarracudaTest, BarracudaInteraction) {
    Point P(2,2);
    Barracuda Test(P,100,false);
    ASSERT_EQ(Test.interact(),"The barracuda is eating");
}

TEST_F(BarracudaTest, WildBarracudaConstructorWithParameter) {
    Point P(2,2);
    Barracuda Test(P,100,true);
    ASSERT_EQ(Test.getName(),"Barracuda");
    ASSERT_EQ(Test.getSkinType(),Animal::Scales);
    ASSERT_EQ(Test.getReproduction(),Animal::Ovipar);
    ASSERT_TRUE(Test.isWaterAnimal());
    ASSERT_TRUE(Test.IsCarnivore());
    ASSERT_TRUE(Test.calculateTotalMeat()>0);
    ASSERT_TRUE(Test.calculateTotalVegetable()==0);
    ASSERT_TRUE(Test.IsWild());
}