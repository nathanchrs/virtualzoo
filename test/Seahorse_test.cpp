//
// Created by alvin on 13/03/17.
//

#include "gtest/gtest.h"
#include "../src/Animal/Pisces/Seahorse/Seahorse.h"

class SeahorseTest : public ::testing::Test {
protected:
    SeahorseTest() {}
};

TEST_F(SeahorseTest, SeahorseConstructorWithParameter) {
    Seahorse Test(100);
    ASSERT_EQ(Test.getName(),"Seahorse");
    ASSERT_EQ(Test.getSkinType(),Animal::Scales);
    ASSERT_EQ(Test.getReproduction(),Animal::Ovipar);
    ASSERT_TRUE(Test.isWaterAnimal());
    ASSERT_TRUE(Test.IsCarnivore());
    ASSERT_TRUE(Test.calculateTotalMeat()>0);
    ASSERT_TRUE(Test.calculateTotalVegetable()==0);
    ASSERT_TRUE(!Test.isWild());
}

TEST_F(SeahorseTest, SeahorseInteraction) {
    Seahorse Test(100);
    ASSERT_EQ(Test.interact(),"The seahorse is camouflaging, preparing to ambush its prey");
}