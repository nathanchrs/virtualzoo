#include "gtest/gtest.h"
#include "../src/Zoo/Animal/Reptile/Iguana/Iguana.h"

class IguanaTest : public ::testing::Test {
protected:
    IguanaTest() {}
};

TEST_F(IguanaTest, IguanaConstructorWithParameter) {
    Point P(2,2);
    Iguana Test(P,100,false);
    ASSERT_EQ(Test.getName(),"Iguana");
    ASSERT_EQ(Test.getSkinType(),Animal::Scales);
    ASSERT_EQ(Test.getReproduction(),Animal::Ovipar);
    ASSERT_TRUE(Test.isLandAnimal());
    ASSERT_TRUE(Test.IsOmnivore());
    ASSERT_TRUE(Test.calculateTotalMeat()>0);
    ASSERT_TRUE(Test.calculateTotalVegetable()>0);
    ASSERT_TRUE(!Test.IsWild());
}

TEST_F(IguanaTest, IguanaInteraction) {
    Point P(2,2);
    Iguana Test(P,100,false);
    ASSERT_EQ(Test.interact(),"The iguana is climbing a tree");
}

