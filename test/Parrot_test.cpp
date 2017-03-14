#include "gtest/gtest.h"
#include "../src/Zoo/Animal/Aves/Parrot/Parrot.h"

class ParrotTest : public ::testing::Test {
protected:
    ParrotTest() {}
};

TEST_F(ParrotTest, ParrotConstructorWithParameter) {
    Point P(2,2);
    Parrot Test(P,100,false);
    ASSERT_EQ(Test.GetName(),"Parrot");
    ASSERT_EQ(Test.GetSkinType(),Animal::Feather);
    ASSERT_EQ(Test.GetReproduction(),Animal::Ovipar);
    ASSERT_TRUE(Test.IsAirAnimal());
    ASSERT_TRUE(Test.IsHerbivore());
    ASSERT_TRUE(Test.CalculateTotalMeat()==0);
    ASSERT_TRUE(Test.CalculateTotalVegetable()>0);
    ASSERT_TRUE(!Test.IsWild());
}

TEST_F(ParrotTest, ParrotInteraction) {
    Point P(2,2);
    Parrot Test(P,100,false);
    ASSERT_EQ(Test.interact(),"Parrot is imitate someone voice that said 'I'm handsome!'");
}