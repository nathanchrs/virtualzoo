#include <gtest/gtest.h>
#include "../src/Controller.h"

class ControllerTest : public ::testing::Test {
protected:
  ControllerTest() {}
};

TEST_F(ControllerTest, ControllerTestConstructorWithParameter) {
  Zoo Z(20, 20);
  Controller C(&Z, true);
  ASSERT_TRUE(&C != NULL);
}