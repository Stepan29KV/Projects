#include <iostream>

#include "seqContainer.h"
#include "listContainer.h"

template <typename T>
void contaner_test(T &container)
{
  std::cout << "Add ten elements (0...9)" << std::endl;
  for (int i = 0; i < 10; i++)
  {
    container.push_back(i);
  }
  std::cout << "container contetnts" << std::endl;
  container.print();
  std::cout << "container size: " << container.get_size() << std::endl;
  std::cout << "Delete item 3, 5, 7" << std::endl;
  for (int i = 3; i < 6; i++)
    container.erase(i);
  container.print();
  std::cout << "Add item to begin(10)" << std::endl;
  container.insert(0, 10);
  container.print();
  std::cout << "Add item item to middle" << std::endl;
  container.insert(container.get_size() / 2, 20);
  container.print();
  std::cout << "Add item to end" << std::endl;
  container.push_back(30);
  container.print();
}

int main()
{
  std::cout << "Serial container" << std::endl;

  SerialContainer<int> sContainer;
  contaner_test(sContainer);

  std::cout << "List container" << std::endl;
  LineContainer<int> lContainer;
  contaner_test(lContainer);
  return (0);
}