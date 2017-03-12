//
// Created by alvin on 12/03/17.
//

#include "gtest/gtest.h"
#include "../src/Animal/Aves/Owl/Owl.h"

class OwlTest : public ::testing::Test {
protected:
    OwlTest() {}
};

TEST_F(OwlTest, OwlConstructorWithParameter) {
    Owl Test(100);
    ASSERT_EQ(Test.getName(),"Owl");
    ASSERT_EQ(Test.getSkinType(),Animal::Feather);
    ASSERT_EQ(Test.getReproduction(),Animal::Ovipar);
    ASSERT_TRUE(Test.isAirAnimal());
    ASSERT_TRUE(Test.IsCarnivore());
    ASSERT_TRUE(Test.calculateTotalMeat()>0);
    ASSERT_TRUE(Test.calculateTotalVegetable()==0);
    ASSERT_TRUE(!Test.isWild());
}

TEST_F(OwlTest, OwlInteraction) {
    Owl Test(100);
    ASSERT_EQ(Test.interact(),"Owls rotate their heads and make 'kuk kuk' sound");
}