#include "../include/hello.h"
#include "gtest/gtest.h"

class HelloTest : public ::testing::Test {
protected:
    HelloTest() {}
};

TEST_F(HelloTest, HelloReturnsHello) {
    ASSERT_EQ(hello(), "hello");
}

