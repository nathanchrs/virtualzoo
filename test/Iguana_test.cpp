//
// Created by aegis on 12/03/17.
//

#include "gtest/gtest.h"
#include "../src/Animal/Reptile/Iguana/Iguana.h"

class IguanaTest : public ::testing::Test {
protected:
    IguanaTest() {}
};

TEST_F(IguanaTest, IguanaConstructorWithParameter) {
    Iguana Test(100);
    ASSERT_EQ(Test.getName(),"Iguana");
    ASSERT_EQ(Test.getSkinType(),Animal::Scales);
    ASSERT_EQ(Test.getReproduction(),Animal::Ovipar);
    ASSERT_TRUE(Test.isLandAnimal());
    ASSERT_TRUE(Test.IsOmnivore());
    ASSERT_TRUE(Test.calculateTotalMeat()>0);
    ASSERT_TRUE(Test.calculateTotalVegetable()>0);
    ASSERT_TRUE(!Test.isWild());
}

TEST_F(IguanaTest, IguanaInteraction) {
    Iguana Test(100);
    ASSERT_EQ(Test.interact(),"The iguana is climbing a tree");
}

