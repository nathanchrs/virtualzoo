//
// Created by aegis on 12/03/17.
//

#include "gtest/gtest.h"
#include "../src/Animal/Mammals/Leopard/Leopard.h"

class LeopardTest : public ::testing::Test {
protected:
    LeopardTest() {}
};

TEST_F(LeopardTest, LeopardConstructorWithParameter) {
    Leopard Test(100);
    ASSERT_EQ(Test.getName(),"Leopard");
    ASSERT_EQ(Test.getSkinType(),Animal::Fur);
    ASSERT_EQ(Test.getReproduction(),Animal::Vivipar);
    ASSERT_TRUE(Test.isLandAnimal());
    ASSERT_TRUE(Test.IsCarnivore());
    ASSERT_TRUE(Test.calculateTotalMeat()>0);
    ASSERT_TRUE(Test.calculateTotalVegetable()==0);
    ASSERT_TRUE(!Test.isWild());
}

TEST_F(LeopardTest, LeopardInteraction) {
    Leopard Test(100);
    ASSERT_EQ(Test.interact(),"The leopard is sleeping with its family");
}
