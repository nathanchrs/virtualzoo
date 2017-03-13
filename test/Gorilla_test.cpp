//
// Created by aegis on 12/03/17.
//

#include "gtest/gtest.h"
#include "../src/Zoo/Animal/Mammals/Gorilla/Gorilla.h"

class GorillaTest : public ::testing::Test {
protected:
    GorillaTest() {}
};

TEST_F(GorillaTest, GorillaConstructorWithParameter) {
    Point P(2,2);
    Gorilla Test(P,100,false);
    ASSERT_EQ(Test.getName(),"Gorilla");
    ASSERT_EQ(Test.getSkinType(),Animal::Fur);
    ASSERT_EQ(Test.getReproduction(),Animal::Vivipar);
    ASSERT_TRUE(Test.isLandAnimal());
    ASSERT_TRUE(Test.IsHerbivore());
    ASSERT_TRUE(Test.calculateTotalMeat()==0);
    ASSERT_TRUE(Test.calculateTotalVegetable()>0);
    ASSERT_TRUE(!Test.IsWild());
}

TEST_F(GorillaTest, GorillaInteraction) {
    Point P(2,2);
    Gorilla Test(P,100,false);
    ASSERT_EQ(Test.interact(),"The gorilla is playing with its toy");
}

