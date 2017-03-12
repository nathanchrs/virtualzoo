#include "../src/Zoo/Zoo.h"
#include "gtest/gtest.h"

class ZooTest : public ::testing::Test {
protected:
    ZooTest() {}
};

TEST_F(ZooTest, ZooConstructor) {
    Zoo zoo(20,20,15,15);
    ASSERT_TRUE(&zoo != NULL);
}

