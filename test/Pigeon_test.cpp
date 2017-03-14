#include "gtest/gtest.h"
#include "../src/Zoo/Animal/Aves/Pigeon/Pigeon.h"

class PigeonTest : public ::testing::Test {
protected:
    PigeonTest() {}
};

TEST_F(PigeonTest, PigeonConstructorWithParameter) {
    Point P(2,2);
    Pigeon Test(P,100,false);
    ASSERT_EQ(Test.getName(),"Pigeon");
    ASSERT_EQ(Test.getSkinType(),Animal::Feather);
    ASSERT_EQ(Test.getReproduction(),Animal::Ovipar);
    ASSERT_TRUE(Test.isAirAnimal());
    ASSERT_TRUE(Test.IsHerbivore());
    ASSERT_TRUE(Test.calculateTotalMeat()==0);
    ASSERT_TRUE(Test.calculateTotalVegetable()>0);
    ASSERT_TRUE(!Test.IsWild());
}

TEST_F(PigeonTest, PigeonInteraction) {
    Point P(2,2);
    Pigeon Test(P,100,false);
    ASSERT_EQ(Test.interact(),"The pigeon is eating its food that the visitor gave");
}