#include "gtest/gtest.h"
#include "../src/Zoo/Animal/Pisces/Lionfish/Lionfish.h"

class LionfishTest : public ::testing::Test {
protected:
    LionfishTest() {}
};

TEST_F(LionfishTest, LionfishConstructorWithParameter) {
    Point P(2,2);
    Lionfish Test(P,100,false);
    ASSERT_EQ(Test.GetName(),"Lionfish");
    ASSERT_EQ(Test.GetSkinType(),Animal::Scales);
    ASSERT_EQ(Test.GetReproduction(),Animal::Ovipar);
    ASSERT_TRUE(Test.IsWaterAnimal());
    ASSERT_TRUE(Test.IsCarnivore());
    ASSERT_TRUE(Test.CalculateTotalMeat()>0);
    ASSERT_TRUE(Test.CalculateTotalVegetable()==0);
    ASSERT_TRUE(!Test.IsWild());
}

TEST_F(LionfishTest, LionfishInteraction) {
    Point P(2,2);
    Lionfish Test(P,100,false);
    ASSERT_EQ(Test.interact(),"Whoa! I thought it was plant. It is lionfish!");
}