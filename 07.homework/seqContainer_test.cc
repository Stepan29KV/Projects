#include "seqContainer.h"
#include <gtest/gtest.h>
#include <iostream>


TEST(SerialContainer, Container_creation)
{
  SerialContainer<int> _container;
  ASSERT_EQ(_container.get_size(), 0);
}

TEST(SerialContainer, push_back)
{
  SerialContainer<int> _container;
  _container.push_back(1);
  _container.push_back(5);

  ASSERT_EQ(_container[1], 5);
}

TEST(SerialContainer, insert_begin)
{
  SerialContainer<int> _container;
  _container.push_back(1);
  _container.push_back(2);

  _container.insert(0, 98);
  ASSERT_EQ(_container[0], 98);
}

TEST(SerialContainer, insert_middle)
{
  SerialContainer<int> _container;
  for (int i = 0; i < 10; ++i)
  {
    _container.push_back(i);
  }

  _container.insert(5, 97);
  ASSERT_EQ(_container[5], 97);
}

TEST(SerialContainer, erase_end)
{
  SerialContainer<int> _container;
  for (int i = 0; i < 10; ++i)
  {
    _container.push_back(i);
  }
  ASSERT_EQ(_container.get_size(), 10);
  _container.erase(10);
  ASSERT_EQ(_container.get_size(), 9);
  ASSERT_EQ(_container[_container.get_size()], 9);
}

TEST(SerialContainer, erase_begin)
{
  SerialContainer<int> _container;
  for (int i = 0; i < 10; ++i)
  {
    _container.push_back(i);
  }
  _container.erase(1);
  ASSERT_EQ(_container[0], 1);
}

TEST(SerialContainer, erase_middle)
{
  SerialContainer<int> _container;
  for (int i = 0; i < 10; ++i)
  {
    _container.push_back(i);
  }
  _container.erase(5);
  ASSERT_EQ(_container[5], 6);
}

// TEST(SerialContainer, print)
// {
//   SerialContainer<int> _container;
//   for (int i = 0; i < 10; ++i)
//   {
//     _container.push_back(i);
//   }
//   // std::string = a;
//   //  std::cin >> a;
//   _container.print();
//   // std::string output = testing::internal::CaptureStdout();
//   EXPECT_EQ(_container.print(), "ddd");
// }


TEST(SerialContainer, print) 
{
  SerialContainer<int> _cnt;
  for (int i = 0; i < 10; ++i) 
  {
    _cnt.push_back(i);
  }
  EXPECT_EQ(10, _cnt.get_size());
  _cnt.print();

}

TEST(SerialContainer, get_size)
{
  SerialContainer<int> _container;
  for (int i = 0; i < 10; ++i)
  {
    _container.push_back(i);
  }
  ASSERT_EQ(_container.get_size(), 10);
}


