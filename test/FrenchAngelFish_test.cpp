//
// Created by alvin on 13/03/17.
//

#include "gtest/gtest.h"
#include "../src/Animal/Pisces/FrenchAngelFish/FrenchAngelFish.h"

class FrenchAngelFishTest : public ::testing::Test {
protected:
    FrenchAngelFishTest() {}
};

TEST_F(FrenchAngelFishTest, FrenchAngelFishConstructorWithParameter) {
    FrenchAngelFish Test(100);
    ASSERT_EQ(Test.getName(),"FrenchAngelFish");
    ASSERT_EQ(Test.getSkinType(),Animal::Scales);
    ASSERT_EQ(Test.getReproduction(),Animal::Ovipar);
    ASSERT_TRUE(Test.isWaterAnimal());
    ASSERT_TRUE(Test.IsHerbivore());
    ASSERT_TRUE(Test.calculateTotalMeat()==0);
    ASSERT_TRUE(Test.calculateTotalVegetable()>0);
    ASSERT_TRUE(!Test.isWild());
}

TEST_F(FrenchAngelFishTest, FrenchAngelFishInteraction) {
    FrenchAngelFish Test(100);
    ASSERT_EQ(Test.interact(),"Splash! It is swimming");
}