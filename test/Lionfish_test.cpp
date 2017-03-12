//
// Created by alvin on 13/03/17.
//

#include "gtest/gtest.h"
#include "../src/Animal/Pisces/Lionfish/Lionfish.h"

class LionfishTest : public ::testing::Test {
protected:
    LionfishTest() {}
};

TEST_F(LionfishTest, LionfishConstructorWithParameter) {
    Lionfish Test(100);
    ASSERT_EQ(Test.getName(),"Lionfish");
    ASSERT_EQ(Test.getSkinType(),Animal::Scales);
    ASSERT_EQ(Test.getReproduction(),Animal::Ovipar);
    ASSERT_TRUE(Test.isWaterAnimal());
    ASSERT_TRUE(Test.IsCarnivore());
    ASSERT_TRUE(Test.calculateTotalMeat()>0);
    ASSERT_TRUE(Test.calculateTotalVegetable()==0);
    ASSERT_TRUE(!Test.isWild());
}

TEST_F(LionfishTest, LionfishInteraction) {
    Lionfish Test(100);
    ASSERT_EQ(Test.interact(),"Whoa! I thought it was plant. It is lionfish!");
}