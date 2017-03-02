#include "../src/Zoo/Zoo.h"
#include "gtest/gtest.h"

class ZooTest : public ::testing::Test {
protected:
    ZooTest() {}
};

TEST_F(ZooTest, ZooConstructor) {
    Zoo zoo;
    ASSERT_TRUE(&zoo != NULL);
}

