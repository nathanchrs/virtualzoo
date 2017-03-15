#include "gtest/gtest.h"
#include "../src/array/array.h"

class ArrayTest : public ::testing::Test {
protected:
  ArrayTest() {}
};

TEST_F(ArrayTest, ArrayConstructor) {
  Array<int> arr;
  ASSERT_EQ(arr.Size(), 0);
  ASSERT_TRUE(arr.IsEmpty());
}

TEST_F(ArrayTest, ArraySubscript) {
  Array<int> arr(5);
  arr[0] = 0;
  arr[1] = 11;
  arr[2] = 22;
  arr[3] = 33;
  arr[4] = 44;
  ASSERT_EQ(arr.Size(), 5);
  ASSERT_FALSE(arr.IsEmpty());
  ASSERT_EQ(arr[0], 0);
  ASSERT_EQ(arr[1], 11);
  ASSERT_EQ(arr[2], 22);
  ASSERT_EQ(arr[3], 33);
  ASSERT_EQ(arr[4], 44);
}

TEST_F(ArrayTest, ArrayPushBackPopBack) {
  Array<int> arr;
  ASSERT_EQ(arr.Size(), 0);
  ASSERT_TRUE(arr.IsEmpty());
  for (int i = 0; i < 100; i++) {
    arr.PushBack(i);
    ASSERT_EQ(arr[i], i);
  }
  ASSERT_EQ(arr.Size(), 100);
  ASSERT_FALSE(arr.IsEmpty());

  for (int i = 99; i >= 0; i--) {
    ASSERT_EQ(arr.PopBack(), i);
  }
  ASSERT_EQ(arr.Size(), 0);
  ASSERT_TRUE(arr.IsEmpty());
}

TEST_F(ArrayTest, ArrayFind) {
  Array<int> arr(5);
  arr[0] = 99;
  arr[1] = 11;
  arr[2] = 22;
  arr[3] = 33;
  arr[4] = 44;
  ASSERT_EQ(arr.Find(0), -1);
  ASSERT_EQ(arr.Find(99), 0);
  ASSERT_EQ(arr.Find(22), 2);
  ASSERT_EQ(arr.Find(44), 4);
  ASSERT_EQ(arr.Find(45), -1);
}
