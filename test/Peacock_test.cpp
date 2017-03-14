#include "gtest/gtest.h"
#include "../src/Zoo/Animal/Aves/Peacock/Peacock.h"

class PeacockTest : public ::testing::Test {
protected:
    PeacockTest() {}
};

TEST_F(PeacockTest, PeacockConstructorWithParameter) {
    Point P(2,2);
    Peacock Test(P,100,false);
    ASSERT_EQ(Test.getName(),"Peacock");
    ASSERT_EQ(Test.getSkinType(),Animal::Feather);
    ASSERT_EQ(Test.getReproduction(),Animal::Ovipar);
    ASSERT_TRUE(Test.isLandAnimal());
    ASSERT_TRUE(Test.IsHerbivore());
    ASSERT_TRUE(Test.calculateTotalMeat()>0);
    ASSERT_TRUE(Test.calculateTotalVegetable()>0);
    ASSERT_TRUE(!Test.IsWild());
}

TEST_F(PeacockTest, PeacockInteraction) {
    Point P(2,2);
    Peacock Test(P,100,false);
    ASSERT_EQ(Test.interact(),"The peacock is spreading its tail");
}