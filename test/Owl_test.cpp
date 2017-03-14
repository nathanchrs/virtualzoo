#include "gtest/gtest.h"
#include "../src/Zoo/Animal/Aves/Owl/Owl.h"

class OwlTest : public ::testing::Test {
protected:
    OwlTest() {}
};

TEST_F(OwlTest, OwlConstructorWithParameter) {
    Point P(2,2);
    Owl Test(P,100,false);
    ASSERT_EQ(Test.getName(),"Owl");
    ASSERT_EQ(Test.getSkinType(),Animal::Feather);
    ASSERT_EQ(Test.getReproduction(),Animal::Ovipar);
    ASSERT_TRUE(Test.isAirAnimal());
    ASSERT_TRUE(Test.IsCarnivore());
    ASSERT_TRUE(Test.calculateTotalMeat()>0);
    ASSERT_TRUE(Test.calculateTotalVegetable()==0);
    ASSERT_TRUE(!Test.IsWild());
}

TEST_F(OwlTest, OwlInteraction) {
    Point P(2,2);
    Owl Test(P,100,false);
    ASSERT_EQ(Test.interact(),"Owls rotate their heads and make 'kuk kuk' sound");
}