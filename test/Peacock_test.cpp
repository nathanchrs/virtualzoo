//
// Created by alvin on 13/03/17.
//

#include "gtest/gtest.h"
#include "../src/Animal/Aves/Peacock/Peacock.h"

class PeacockTest : public ::testing::Test {
protected:
    PeacockTest() {}
};

TEST_F(PeacockTest, PeacockConstructorWithParameter) {
    Peacock Test(100);
    ASSERT_EQ(Test.getName(),"Peacock");
    ASSERT_EQ(Test.getSkinType(),Animal::Feather);
    ASSERT_EQ(Test.getReproduction(),Animal::Ovipar);
    ASSERT_TRUE(Test.isLandAnimal());
    ASSERT_TRUE(Test.IsHerbivore());
    ASSERT_TRUE(Test.calculateTotalMeat()>0);
    ASSERT_TRUE(Test.calculateTotalVegetable()>0);
    ASSERT_TRUE(!Test.isWild());
}

TEST_F(PeacockTest, PeacockInteraction) {
    Peacock Test(100);
    ASSERT_EQ(Test.interact(),"The peacock is spreading its tail");
}