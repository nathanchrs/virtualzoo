//
// Created by aegis on 12/03/17.
//

#include "gtest/gtest.h"
#include "../src/Zoo/Animal/Reptile/KomodoDragon/KomodoDragon.h"

class KomodoDragonTest : public ::testing::Test {
protected:
    KomodoDragonTest() {}
};

TEST_F(KomodoDragonTest, KomodoDragonConstructorWithParameter) {
    Point P(2,2);
    KomodoDragon Test(P,100,false);
    ASSERT_EQ(Test.getName(),"KomodoDragon");
    ASSERT_EQ(Test.getSkinType(),Animal::Scales);
    ASSERT_EQ(Test.getReproduction(),Animal::Ovipar);
    ASSERT_TRUE(Test.isLandAnimal());
    ASSERT_TRUE(Test.IsCarnivore());
    ASSERT_TRUE(Test.calculateTotalMeat()>0);
    ASSERT_TRUE(Test.calculateTotalVegetable()==0);
    ASSERT_TRUE(!Test.IsWild());
}

TEST_F(KomodoDragonTest, KomodoDragonInteraction) {
    Point P(2,2);
    KomodoDragon Test(P,100,false);
    ASSERT_EQ(Test.interact(),"The komodo dragon is eating some beef that the zookeper gave");
}

TEST_F(KomodoDragonTest, WildKomodoDragonConstructorWithParameter) {
    Point P(2,2);
    KomodoDragon Test(P,100,true);
    ASSERT_EQ(Test.getName(),"KomodoDragon");
    ASSERT_EQ(Test.getSkinType(),Animal::Scales);
    ASSERT_EQ(Test.getReproduction(),Animal::Ovipar);
    ASSERT_TRUE(Test.isLandAnimal());
    ASSERT_TRUE(Test.IsCarnivore());
    ASSERT_TRUE(Test.calculateTotalMeat()>0);
    ASSERT_TRUE(Test.calculateTotalVegetable()==0);
    ASSERT_TRUE(Test.IsWild());
}