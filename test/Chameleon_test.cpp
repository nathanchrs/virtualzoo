#include "gtest/gtest.h"
#include "../src/Zoo/Animal/Reptile/Chameleon/Chameleon.h"

class ChameleonTest : public ::testing::Test {
protected:
    ChameleonTest() {}
};

TEST_F(ChameleonTest, ChameleonConstructorWithParameter) {
    Point P(2,2);
    Chameleon Test(P,100,false);
    ASSERT_EQ(Test.GetName(),"Chameleon");
    ASSERT_EQ(Test.GetSkinType(),Animal::Scales);
    ASSERT_EQ(Test.GetReproduction(),Animal::Ovipar);
    ASSERT_TRUE(Test.IsLandAnimal());
    ASSERT_TRUE(Test.IsCarnivore());
    ASSERT_TRUE(Test.CalculateTotalMeat()>0);
    ASSERT_TRUE(Test.CalculateTotalVegetable()==0);
    ASSERT_TRUE(!Test.IsWild());
}

TEST_F(ChameleonTest, ChameleonInteraction) {
    Point P(2,2);
    Chameleon Test(P,100,false);
    ASSERT_EQ(Test.interact(),"The chameleon is changing its color and its color become like leaf");
}

