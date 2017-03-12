//
// Created by aegis on 12/03/17.
//

#include "gtest/gtest.h"
#include "../src/Animal/Reptile/Python/Python.h"

class PythonTest : public ::testing::Test {
protected:
    PythonTest() {}
};

TEST_F(PythonTest, PythonConstructorWithParameter) {
    Python Test(100);
    ASSERT_EQ(Test.getName(),"Python");
    ASSERT_EQ(Test.getSkinType(),Animal::Scales);
    ASSERT_EQ(Test.getReproduction(),Animal::Ovipar);
    ASSERT_TRUE(Test.isLandAnimal());
    ASSERT_TRUE(Test.IsCarnivore());
    ASSERT_TRUE(Test.calculateTotalMeat()>0);
    ASSERT_TRUE(Test.calculateTotalVegetable()==0);
    ASSERT_TRUE(!Test.isWild());
}

TEST_F(PythonTest, PythonInteraction) {
    Python Test(100);
    ASSERT_EQ(Test.interact(),"The python is squeezing a chicken that the zookeper gave");
}

