//
// Created by alvin on 13/03/17.
//

#include "gtest/gtest.h"
#include "../src/Zoo/Animal/Aves/Parrot/Parrot.h"

class ParrotTest : public ::testing::Test {
protected:
    ParrotTest() {}
};

TEST_F(ParrotTest, ParrotConstructorWithParameter) {
    Point P(2,2);
    Parrot Test(P,100,false);
    ASSERT_EQ(Test.getName(),"Parrot");
    ASSERT_EQ(Test.getSkinType(),Animal::Feather);
    ASSERT_EQ(Test.getReproduction(),Animal::Ovipar);
    ASSERT_TRUE(Test.isAirAnimal());
    ASSERT_TRUE(Test.IsHerbivore());
    ASSERT_TRUE(Test.calculateTotalMeat()==0);
    ASSERT_TRUE(Test.calculateTotalVegetable()>0);
    ASSERT_TRUE(!Test.IsWild());
}

TEST_F(ParrotTest, ParrotInteraction) {
    Point P(2,2);
    Parrot Test(P,100,false);
    ASSERT_EQ(Test.interact(),"Parrot is imitate someone voice that said 'I'm handsome!'");
}