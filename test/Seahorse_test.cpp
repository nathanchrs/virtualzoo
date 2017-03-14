#include "gtest/gtest.h"
#include "../src/Zoo/Animal/Pisces/Seahorse/Seahorse.h"

class SeahorseTest : public ::testing::Test {
protected:
    SeahorseTest() {}
};

TEST_F(SeahorseTest, SeahorseConstructorWithParameter) {
    Point P(2,2);
    Seahorse Test(P,100,false);
    ASSERT_EQ(Test.GetName(),"Seahorse");
    ASSERT_EQ(Test.GetSkinType(),Animal::Scales);
    ASSERT_EQ(Test.GetReproduction(),Animal::Ovipar);
    ASSERT_TRUE(Test.CalculateTotalMeat()>0);
    ASSERT_TRUE(Test.CalculateTotalVegetable()==0);
    ASSERT_TRUE(!Test.IsWild());
}

TEST_F(SeahorseTest, SeahorseInteraction) {
    Point P(2,2);
    Seahorse Test(P,100,false);
    ASSERT_EQ(Test.interact(),"The seahorse is camouflaging, preparing to ambush its prey");
}