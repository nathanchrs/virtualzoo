//
// Created by alvin on 13/03/17.
//

#include "gtest/gtest.h"
#include "../src/Animal/Pisces/WildBarracuda/WildBarracuda.h"

class WildBarracudaTest : public ::testing::Test {
protected:
    WildBarracudaTest() {}
};

TEST_F(WildBarracudaTest, WildBarracudaConstructorWithParameter) {
    WildBarracuda Test(100);
    ASSERT_EQ(Test.getName(),"WildBarracuda");
    ASSERT_EQ(Test.getSkinType(),Animal::Scales);
    ASSERT_EQ(Test.getReproduction(),Animal::Ovipar);
    ASSERT_TRUE(Test.isWaterAnimal());
    ASSERT_TRUE(Test.IsCarnivore());
    ASSERT_TRUE(Test.calculateTotalMeat()>0);
    ASSERT_TRUE(Test.calculateTotalVegetable()==0);
    ASSERT_TRUE(Test.isWild());
}

TEST_F(WildBarracudaTest, WildBarracudaInteraction) {
    WildBarracuda Test(100);
    ASSERT_EQ(Test.interact(),"WHOOSH!");
}