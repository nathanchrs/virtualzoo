//
// Created by aegis on 12/03/17.
//

#include "gtest/gtest.h"
#include "../src/Animal/Mammals/Tiger/Tiger.h"

class TigerTest : public ::testing::Test {
protected:
    TigerTest() {}
};

TEST_F(TigerTest, TigerConstructorWithParameter) {
    Tiger Test(100);
    ASSERT_EQ(Test.getName(),"Tiger");
    ASSERT_EQ(Test.getSkinType(),Animal::Fur);
    ASSERT_EQ(Test.getReproduction(),Animal::Vivipar);
    ASSERT_TRUE(Test.isLandAnimal());
    ASSERT_TRUE(Test.IsCarnivore());
    ASSERT_TRUE(Test.calculateTotalMeat()>0);
    ASSERT_TRUE(Test.calculateTotalVegetable()==0);
    ASSERT_TRUE(!Test.isWild());
}

TEST_F(TigerTest, TigerInteraction) {
    Tiger Test(100);
    ASSERT_EQ(Test.interact(),"The tiger is roaring. The sound that tiger produce is rawwrrrrr!");
}

