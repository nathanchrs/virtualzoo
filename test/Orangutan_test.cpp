//
// Created by aegis on 12/03/17.
//

#include "gtest/gtest.h"
#include "../src/Animal/Mammals/Orangutan/Orangutan.h"

class OrangutanTest : public ::testing::Test {
protected:
    OrangutanTest() {}
};

TEST_F(OrangutanTest, OrangutanConstructorWithParameter) {
    Orangutan Test(100);
    ASSERT_EQ(Test.getName(),"Orangutan");
    ASSERT_EQ(Test.getSkinType(),Animal::Fur);
    ASSERT_EQ(Test.getReproduction(),Animal::Vivipar);
    ASSERT_TRUE(Test.isLandAnimal());
    ASSERT_TRUE(Test.IsOmnivore());
    ASSERT_TRUE(Test.calculateTotalMeat()>0);
    ASSERT_TRUE(Test.calculateTotalVegetable()>0);
    ASSERT_TRUE(!Test.isWild());
}

TEST_F(OrangutanTest, OrangutanInteraction) {
    Orangutan Test(100);
    ASSERT_EQ(Test.interact(),"The orangutan is hanging around the trees, picking every fruits and eating them");
}

