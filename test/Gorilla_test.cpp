//
// Created by aegis on 12/03/17.
//

#include "gtest/gtest.h"
#include "../src/Animal/Mammals/Gorilla/Gorilla.h"

class GorillaTest : public ::testing::Test {
protected:
    GorillaTest() {}
};

TEST_F(GorillaTest, GorillaConstructorWithParameter) {
    Gorilla Test(100);
    ASSERT_EQ(Test.getName(),"Gorilla");
    ASSERT_EQ(Test.getSkinType(),Animal::Fur);
    ASSERT_EQ(Test.getReproduction(),Animal::Vivipar);
    ASSERT_TRUE(Test.isLandAnimal());
    ASSERT_TRUE(Test.IsOmnivore());
    ASSERT_TRUE(Test.calculateTotalMeat()>0);
    ASSERT_TRUE(Test.calculateTotalVegetable()>0);
    ASSERT_TRUE(!Test.isWild());
}

TEST_F(GorillaTest, GorillaInteraction) {
    Gorilla Test(100);
    ASSERT_EQ(Test.interact(),"The gorilla is playing with its toy");
}

