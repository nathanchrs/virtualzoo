//
// Created by alvin on 12/03/17.
//

#include "gtest/gtest.h"
#include "../src/Animal/Aves/Eagle/Eagle.h"

class EagleTest : public ::testing::Test {
protected:
    EagleTest() {}
};

TEST_F(EagleTest, EagleConstructorWithParameter) {
    Eagle Igel(100);
    ASSERT_EQ(Igel.getName(),"Eagle");
    ASSERT_EQ(Igel.getSkinType(),Animal::Feather);
    ASSERT_EQ(Igel.getReproduction(),Animal::Ovipar);
    ASSERT_TRUE(Igel.isAirAnimal());
    ASSERT_TRUE(Igel.IsCarnivore());
    ASSERT_TRUE(Igel.calculateTotalMeat()>0);
    ASSERT_TRUE(Igel.calculateTotalVegetable()==0);
    ASSERT_TRUE(!Igel.isWild());
}

TEST_F(EagleTest, EagleInteraction) {
    Eagle Igel(100);
    ASSERT_EQ(Igel.interact(),"The eagle is eating its food that the zoo keeper gave");
}