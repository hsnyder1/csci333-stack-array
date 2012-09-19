#include "gtest/gtest.h"
#include "../src/Stack.h"

TEST(StackTest, Push) {
  Stack* s = new Stack();
  s->push(1);
  s->push(2);
  s->push(3);
  s->push(4);
  s->push(5);
  s->push(6);
  s->push(7);
  s->push(8);
  s->push(9);

  EXPECT_EQ(10, s->cap());

  s->push(10);
  s->push(11);
  s->push(12);

  EXPECT_EQ(20, s->cap());
}


