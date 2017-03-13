//
// Created by aegis on 12/03/17.
//

#include "gtest/gtest.h"
#include "../src/Zoo/Animal/Reptile/Chameleon/Chameleon.h"

class ChameleonTest : public ::testing::Test {
protected:
    ChameleonTest() {}
};

TEST_F(ChameleonTest, ChameleonConstructorWithParameter) {
    Point P(2,2);
    Chameleon Test(P,100,false);
    ASSERT_EQ(Test.getName(),"Chameleon");
    ASSERT_EQ(Test.getSkinType(),Animal::Scales);
    ASSERT_EQ(Test.getReproduction(),Animal::Ovipar);
    ASSERT_TRUE(Test.isLandAnimal());
    ASSERT_TRUE(Test.IsCarnivore());
    ASSERT_TRUE(Test.calculateTotalMeat()>0);
    ASSERT_TRUE(Test.calculateTotalVegetable()==0);
    ASSERT_TRUE(!Test.IsWild());
}

TEST_F(ChameleonTest, ChameleonInteraction) {
    Point P(2,2);
    Chameleon Test(P,100,false);
    ASSERT_EQ(Test.interact(),"The chameleon is changing its color and its color become like leaf");
}

