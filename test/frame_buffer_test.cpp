#include <gtest/gtest.h>
#include "../src/Renderer/ConsoleRenderer/FrameBuffer.h"

class FrameBufferTest : public ::testing::Test {
protected:
  FrameBufferTest() {}
};

TEST_F(FrameBufferTest, FrameBufferTestConstructorWithParameter) {
  FrameBuffer F(5, 5, true);
  ASSERT_EQ(F.GetCols(), 5);
  ASSERT_EQ(F.GetRows(), 5);
  ASSERT_TRUE(F.IsColored());
}

TEST_F(FrameBufferTest, FrameBufferTestMethod) {
  FrameBuffer F(6, 6, true);
  ASSERT_EQ(F.GetRows(), 6);
  ASSERT_EQ(F.GetCols(), 6);
  ASSERT_TRUE(F.IsColored());
  F.SetColored(false);
  ASSERT_FALSE(F.IsColored());
  F.SetInputPrompt("Testing123");
  ASSERT_EQ(F.GetInputPrompt(), "Testing123");
}