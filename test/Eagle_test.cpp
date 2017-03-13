//
// Created by alvin on 12/03/17.
//

#include "gtest/gtest.h"
#include "../src/Zoo/Animal/Aves/Eagle/Eagle.h"

class EagleTest : public ::testing::Test {
protected:
    EagleTest() {}
};

TEST_F(EagleTest, EagleConstructorWithParameter) {
    Eagle Test(100);
    ASSERT_EQ(Test.getName(),"Eagle");
    ASSERT_EQ(Test.getSkinType(),Animal::Feather);
    ASSERT_EQ(Test.getReproduction(),Animal::Ovipar);
    ASSERT_TRUE(Test.isAirAnimal());
    ASSERT_TRUE(Test.IsCarnivore());
    ASSERT_TRUE(Test.calculateTotalMeat()>0);
    ASSERT_TRUE(Test.calculateTotalVegetable()==0);
    ASSERT_TRUE(!Test.isWild());
}

TEST_F(EagleTest, EagleInteraction) {
    Eagle Test(100);
    ASSERT_EQ(Test.interact(),"The eagle is eating its food that the zoo keeper gave");
}