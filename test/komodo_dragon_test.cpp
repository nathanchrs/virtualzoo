#include "gtest/gtest.h"
#include "../src/zoo/animal/reptile/komodo_dragon/komodo_dragon.h"

class KomodoDragonTest : public ::testing::Test {
protected:
  KomodoDragonTest() {}
};

TEST_F(KomodoDragonTest, KomodoDragonConstructorWithParameter) {
  Point P(2, 2);
  KomodoDragon Test(P, 100, false);
  ASSERT_EQ(Test.GetName(), "KomodoDragon");
  ASSERT_EQ(Test.GetSkinType(), Animal::Scales);
  ASSERT_EQ(Test.GetReproduction(), Animal::Ovipar);
  ASSERT_TRUE(Test.CalculateTotalMeat() > 0);
  ASSERT_TRUE(Test.CalculateTotalVegetable() == 0);
  ASSERT_TRUE(!Test.IsWild());
}

TEST_F(KomodoDragonTest, KomodoDragonInteraction) {
  Point P(2, 2);
  KomodoDragon Test(P, 100, false);
  ASSERT_EQ(Test.Interact(),
            "The komodo dragon is eating some beef that the zookeper gave");
}

TEST_F(KomodoDragonTest, WildKomodoDragonConstructorWithParameter) {
  Point P(2, 2);
  KomodoDragon Test(P, 100, true);
  ASSERT_EQ(Test.GetName(), "KomodoDragon");
  ASSERT_EQ(Test.GetSkinType(), Animal::Scales);
  ASSERT_EQ(Test.GetReproduction(), Animal::Ovipar);
  ASSERT_TRUE(Test.IsValidHabitat(Habitat::LandHabitat));
  ASSERT_TRUE(Test.CalculateTotalMeat() > 0);
  ASSERT_TRUE(Test.CalculateTotalVegetable() == 0);
  ASSERT_TRUE(Test.IsWild());
}