//
// Created by alvin on 13/03/17.
//

#include "gtest/gtest.h"
#include "../src/Animal/Aves/Pigeon/Pigeon.h"

class PigeonTest : public ::testing::Test {
protected:
    PigeonTest() {}
};

TEST_F(PigeonTest, PigeonConstructorWithParameter) {
    Pigeon Test(100);
    ASSERT_EQ(Test.getName(),"Pigeon");
    ASSERT_EQ(Test.getSkinType(),Animal::Feather);
    ASSERT_EQ(Test.getReproduction(),Animal::Ovipar);
    ASSERT_TRUE(Test.isAirAnimal());
    ASSERT_TRUE(Test.IsHerbivore());
    ASSERT_TRUE(Test.calculateTotalMeat()==0);
    ASSERT_TRUE(Test.calculateTotalVegetable()>0);
    ASSERT_TRUE(!Test.isWild());
}

TEST_F(PigeonTest, PigeonInteraction) {
    Pigeon Test(100);
    ASSERT_EQ(Test.interact(),"The pigeon is eating its food that the visitor gave");
}