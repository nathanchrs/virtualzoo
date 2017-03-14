#include "gtest/gtest.h"
#include "../src/Zoo/Animal/Pisces/Lionfish/Lionfish.h"

class LionfishTest : public ::testing::Test {
protected:
    LionfishTest() {}
};

TEST_F(LionfishTest, LionfishConstructorWithParameter) {
    Point P(2,2);
    Lionfish Test(P,100,false);
    ASSERT_EQ(Test.getName(),"Lionfish");
    ASSERT_EQ(Test.getSkinType(),Animal::Scales);
    ASSERT_EQ(Test.getReproduction(),Animal::Ovipar);
    ASSERT_TRUE(Test.isWaterAnimal());
    ASSERT_TRUE(Test.IsCarnivore());
    ASSERT_TRUE(Test.calculateTotalMeat()>0);
    ASSERT_TRUE(Test.calculateTotalVegetable()==0);
    ASSERT_TRUE(!Test.IsWild());
}

TEST_F(LionfishTest, LionfishInteraction) {
    Point P(2,2);
    Lionfish Test(P,100,false);
    ASSERT_EQ(Test.interact(),"Whoa! I thought it was plant. It is lionfish!");
}