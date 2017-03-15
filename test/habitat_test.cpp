#include "gtest/gtest.h"
#include "../src/zoo/cell/habitat.h"

class HabitatTest : public ::testing::Test {
protected:
  HabitatTest() {}
};

TEST_F(HabitatTest, HabitatTestConstructor) {
  Point P(2, 2);
  Habitat H(P, Habitat::AirHabitat);
  ASSERT_EQ(H.GetType(), Habitat::AirHabitat);
  Habitat H2(P, Habitat::LandHabitat);
  ASSERT_EQ(H2.GetType(), Habitat::LandHabitat);
  Habitat H3(P, Habitat::WaterHabitat);
  ASSERT_EQ(H3.GetType(), Habitat::WaterHabitat);
}

TEST_F(HabitatTest, HabitatTestMethod) {
  Point P(2, 2);
  Habitat H(P, Habitat::AirHabitat);
  ASSERT_EQ(H.GetType(), Habitat::AirHabitat);
  Habitat H2(P, Habitat::LandHabitat);
  ASSERT_EQ(H2.GetType(), Habitat::LandHabitat);
  Habitat H3(P, Habitat::WaterHabitat);
  ASSERT_EQ(H3.GetType(), Habitat::WaterHabitat);
  char ch;
  ch = H2.Render();
  ASSERT_EQ(ch, 'l');
  ch = H.Render();
  ASSERT_EQ(ch, 'a');
  ch = H3.Render();
  ASSERT_EQ(ch, 'w');
}