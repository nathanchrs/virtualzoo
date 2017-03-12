//
// Created by aegis on 12/03/17.
//

#include "gtest/gtest.h"
#include "../src/Animal/Reptile/KomodoDragon/KomodoDragon.h"

class KomodoDragonTest : public ::testing::Test {
protected:
    KomodoDragonTest() {}
};

TEST_F(KomodoDragonTest, KomodoDragonConstructorWithParameter) {
    KomodoDragon Test(100);
    ASSERT_EQ(Test.getName(),"KomodoDragon");
    ASSERT_EQ(Test.getSkinType(),Animal::Scales);
    ASSERT_EQ(Test.getReproduction(),Animal::Ovipar);
    ASSERT_TRUE(Test.isLandAnimal());
    ASSERT_TRUE(Test.IsCarnivore());
    ASSERT_TRUE(Test.calculateTotalMeat()>0);
    ASSERT_TRUE(Test.calculateTotalVegetable()==0);
    ASSERT_TRUE(!Test.isWild());
}

TEST_F(KomodoDragonTest, KomodoDragonInteraction) {
    KomodoDragon Test(100);
    ASSERT_EQ(Test.interact(),"The komodo dragon is eating some beef that the zookeper gave");
}

