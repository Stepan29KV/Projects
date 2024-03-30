#include "listContainer.h"
#include <gtest/gtest.h>
#include <iostream>

// #include "seqContainer.h"


TEST(LineContainer, Constructor)
{
  LineContainer<int> _container;
  ASSERT_EQ(_container.get_size(), 0);

}

TEST(LineContainer, push_back)
{
   LineContainer<int> _container;
  // LineContainer<int> _cnt;
  _container.push_back(1);
  _container.push_back(5);
   ASSERT_EQ(_container[1], 5);
}


TEST(LineContainer, insert_begin)
{
  LineContainer<int> _container;
  _container.push_back(1);
  _container.push_back(2);

  _container.insert(0, 97);
  ASSERT_EQ(_container[0], 97);
}

TEST(LineContainer, insert_middle)
{
  LineContainer<int> _container;
  for (int i = 0; i < 10; ++i)
  {
    _container.push_back(i);
  }

  _container.insert(5, 999);
  ASSERT_EQ(_container[5], 999);
}

TEST(LineContainer, erase_end)
{
  LineContainer<int> _container;
  for (int i = 0; i < 10; ++i)
  {
    _container.push_back(i);
  }
  ASSERT_EQ(_container.get_size(), 10);
  _container.erase(10);
  ASSERT_EQ(_container.get_size(), 9);
  ASSERT_EQ(_container[_container.get_size() - 1], 8);
}

TEST(LineContainer, erase_begin)
{
  LineContainer<int> _container;
  for (int i = 0; i < 10; ++i)
  {
    _container.push_back(i);
  }
  _container.erase(0);
  ASSERT_EQ(_container[0], 1);
}

TEST(LineContainer, erase_middle)
{
  LineContainer<int> _container;
  for (int i = 0; i < 10; ++i)
  {
    _container.push_back(i);
  }
  _container.erase(5);
  ASSERT_EQ(_container[5], 6);
}




TEST(LineContainer, get_size)
{
  LineContainer<int> _container;
  for (int i = 0; i < 10; ++i)
  {
    _container.push_back(i);
  }
  ASSERT_EQ(_container.get_size(), 10);
}

TEST(LineContainer, print) 
{
  LineContainer<int> _cnt;
  for (int i = 0; i < 10; ++i) 
  {
    _cnt.push_back(i);
  }
  EXPECT_EQ(10, _cnt.get_size());
  _cnt.print();

}