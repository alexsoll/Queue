#include "..\Queue\Queue.h"

#include "gtest.h"

TEST(TQueue, can_create_queue_with_positive_size)
{
  ASSERT_NO_THROW(TQueue<int> s(5));
}

