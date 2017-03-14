#include "gtest/gtest.h"
#include "../src/Zoo/Animal/Mammals/Leopard/Leopard.h"

class LeopardTest : public ::testing::Test {
protected:
    LeopardTest() {}
};

TEST_F(LeopardTest, LeopardConstructorWithParameter) {
    Point P(2,2);
    Leopard Test(P,100,false);
    ASSERT_EQ(Test.getName(),"Leopard");
    ASSERT_EQ(Test.getSkinType(),Animal::Fur);
    ASSERT_EQ(Test.getReproduction(),Animal::Vivipar);
    ASSERT_TRUE(Test.isLandAnimal());
    ASSERT_TRUE(Test.IsCarnivore());
    ASSERT_TRUE(Test.calculateTotalMeat()>0);
    ASSERT_TRUE(Test.calculateTotalVegetable()==0);
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
    ASSERT_EQ(Test.getName(),"Leopard");
    ASSERT_EQ(Test.getSkinType(),Animal::Fur);
    ASSERT_EQ(Test.getReproduction(),Animal::Vivipar);
    ASSERT_TRUE(Test.isLandAnimal());
    ASSERT_TRUE(Test.IsCarnivore());
    ASSERT_TRUE(Test.calculateTotalMeat()>0);
    ASSERT_TRUE(Test.calculateTotalVegetable()==0);
    ASSERT_TRUE(Test.IsWild());
}