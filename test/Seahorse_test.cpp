//
// Created by alvin on 13/03/17.
//

#include "gtest/gtest.h"
#include "../src/Zoo/Animal/Pisces/Seahorse/Seahorse.h"

class SeahorseTest : public ::testing::Test {
protected:
    SeahorseTest() {}
};

TEST_F(SeahorseTest, SeahorseConstructorWithParameter) {
    Point P(2,2);
    Seahorse Test(P,100,false);
    ASSERT_EQ(Test.getName(),"Seahorse");
    ASSERT_EQ(Test.getSkinType(),Animal::Scales);
    ASSERT_EQ(Test.getReproduction(),Animal::Ovipar);
    ASSERT_TRUE(Test.isWaterAnimal());
    ASSERT_TRUE(Test.IsCarnivore());
    ASSERT_TRUE(Test.calculateTotalMeat()>0);
    ASSERT_TRUE(Test.calculateTotalVegetable()==0);
    ASSERT_TRUE(!Test.IsWild());
}

TEST_F(SeahorseTest, SeahorseInteraction) {
    Point P(2,2);
    Seahorse Test(P,100,false);
    ASSERT_EQ(Test.interact(),"The seahorse is camouflaging, preparing to ambush its prey");
}