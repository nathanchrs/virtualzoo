//
// Created by alvin on 13/03/17.
//

#include "gtest/gtest.h"
#include "../src/Animal/Aves/WildEagle/WildEagle.h"

class WildEagleTest : public ::testing::Test {
protected:
    WildEagleTest() {}
};

TEST_F(WildEagleTest, WildEagleConstructorWithParameter) {
    WildEagle Test(100);
    ASSERT_EQ(Test.getName(),"WildEagle");
    ASSERT_EQ(Test.getSkinType(),Animal::Feather);
    ASSERT_EQ(Test.getReproduction(),Animal::Ovipar);
    ASSERT_TRUE(Test.isAirAnimal());
    ASSERT_TRUE(Test.IsCarnivore());
    ASSERT_TRUE(Test.calculateTotalMeat()>0);
    ASSERT_TRUE(Test.calculateTotalVegetable()==0);
    ASSERT_TRUE(Test.isWild());
}

TEST_F(WildEagleTest, WildEagleInteraction) {
    WildEagle Test(100);
    ASSERT_EQ(Test.interact(),"AKK!");
}