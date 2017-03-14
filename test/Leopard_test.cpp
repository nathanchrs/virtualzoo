#include "gtest/gtest.h"
#include "../src/Zoo/Animal/Mammals/Leopard/Leopard.h"

class LeopardTest : public ::testing::Test {
protected:
    LeopardTest() {}
};

TEST_F(LeopardTest, LeopardConstructorWithParameter) {
    Point P(2,2);
    Leopard Test(P,100,false);
    ASSERT_EQ(Test.GetName(),"Leopard");
    ASSERT_EQ(Test.GetSkinType(),Animal::Fur);
    ASSERT_EQ(Test.GetReproduction(),Animal::Vivipar);
    ASSERT_TRUE(Test.IsLandAnimal());
    ASSERT_TRUE(Test.IsCarnivore());
    ASSERT_TRUE(Test.CalculateTotalMeat()>0);
    ASSERT_TRUE(Test.CalculateTotalVegetable()==0);
    ASSERT_TRUE(!Test.IsWild());
}

TEST_F(LeopardTest, LeopardInteraction) {
    Point P(2,2);
    Leopard Test(P,100,false);
    ASSERT_EQ(Test.interact(),"The leopard is sleeping with its family");
}

TEST_F(LeopardTest, WildLeopardConstructorWithParameter) {
    Point P(2,2);
    Leopard Test(P,100,true);
    ASSERT_EQ(Test.GetName(),"Leopard");
    ASSERT_EQ(Test.GetSkinType(),Animal::Fur);
    ASSERT_EQ(Test.GetReproduction(),Animal::Vivipar);
    ASSERT_TRUE(Test.IsLandAnimal());
    ASSERT_TRUE(Test.IsCarnivore());
    ASSERT_TRUE(Test.CalculateTotalMeat()>0);
    ASSERT_TRUE(Test.CalculateTotalVegetable()==0);
    ASSERT_TRUE(Test.IsWild());
}