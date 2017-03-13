//
// Created by aegis on 12/03/17.
//

#include "gtest/gtest.h"
#include "../src/Zoo/Animal/Reptile/Python/Python.h"

class PythonTest : public ::testing::Test {
protected:
    PythonTest() {}
};

TEST_F(PythonTest, PythonConstructorWithParameter) {
    Point P(2,2);
    Python Test(P,100,false);
    ASSERT_EQ(Test.getName(),"Python");
    ASSERT_EQ(Test.getSkinType(),Animal::Scales);
    ASSERT_EQ(Test.getReproduction(),Animal::Ovipar);
    ASSERT_TRUE(Test.isLandAnimal());
    ASSERT_TRUE(Test.IsCarnivore());
    ASSERT_TRUE(Test.calculateTotalMeat()>0);
    ASSERT_TRUE(Test.calculateTotalVegetable()==0);
    ASSERT_TRUE(!Test.IsWild());
}

TEST_F(PythonTest, PythonInteraction) {
    Point P(2,2);
    Python Test(P,100,false);
    ASSERT_EQ(Test.interact(),"The python is squeezing a chicken that the zookeper gave");
}

TEST_F(PythonTest, WildPythonConstructorWithParameter) {
    Point P(2,2);
    Python Test(P,100,true);
    ASSERT_EQ(Test.getName(),"Python");
    ASSERT_EQ(Test.getSkinType(),Animal::Scales);
    ASSERT_EQ(Test.getReproduction(),Animal::Ovipar);
    ASSERT_TRUE(Test.isLandAnimal());
    ASSERT_TRUE(Test.IsCarnivore());
    ASSERT_TRUE(Test.calculateTotalMeat()>0);
    ASSERT_TRUE(Test.calculateTotalVegetable()==0);
    ASSERT_TRUE(Test.IsWild());
}