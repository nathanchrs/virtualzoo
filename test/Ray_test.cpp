//
// Created by alvin on 13/03/17.
//

#include "gtest/gtest.h"
#include "../src/Animal/Pisces/Ray/Ray.h"

class RayTest : public ::testing::Test {
protected:
    RayTest() {}
};

TEST_F(RayTest, RayConstructorWithParameter) {
    Ray Test(100);
    ASSERT_EQ(Test.getName(),"Ray");
    ASSERT_EQ(Test.getSkinType(),Animal::Scales);
    ASSERT_EQ(Test.getReproduction(),Animal::Ovipar);
    ASSERT_TRUE(Test.isWaterAnimal());
    ASSERT_TRUE(Test.IsCarnivore());
    ASSERT_TRUE(Test.calculateTotalMeat()>0);
    ASSERT_TRUE(Test.calculateTotalVegetable()==0);
    ASSERT_TRUE(!Test.isWild());
}

TEST_F(RayTest, RayInteraction) {
    Ray Test(100);
    ASSERT_EQ(Test.interact(),"The ray is swimming as floating through the water");
}