//
// Created by aegis on 12/03/17.
//

#include "gtest/gtest.h"
#include "../src/Animal/Reptile/WildPython/WildPython.h"

class WildPythonTest : public ::testing::Test {
protected:
    WildPythonTest() {}
};

TEST_F(WildPythonTest, WildPythonConstructorWithParameter) {
    WildPython Test(100);
    ASSERT_EQ(Test.getName(),"WildPython");
    ASSERT_EQ(Test.getSkinType(),Animal::Scales);
    ASSERT_EQ(Test.getReproduction(),Animal::Ovipar);
    ASSERT_TRUE(Test.isLandAnimal());
    ASSERT_TRUE(Test.IsCarnivore());
    ASSERT_TRUE(Test.calculateTotalMeat()>0);
    ASSERT_TRUE(Test.calculateTotalVegetable()==0);
    ASSERT_TRUE(Test.isWild());
}

TEST_F(WildPythonTest, WildPythonInteraction) {
    WildPython Test(100);
    ASSERT_EQ(Test.interact(),"SHAAHH!");
}

