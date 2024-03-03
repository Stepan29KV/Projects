#include <stdexcept>

template <typename T>
struct Node
{
  Node();
  Node<T> *prev;
  Node<T> *next;
  T value;
};

template <typename T>
Node<T>::Node()
{
  prev = nullptr;
  next = nullptr;
}

template <typename T>
class LineContainer
{
public:
  LineContainer()
  {
    m_first = nullptr;
    m_last = nullptr;
    m_size = 0;
  };

  ~LineContainer(){};

  void push_back(const T &value)
  {
    Node<T> *node = new Node<T>;
    node->value = value;
    if (m_size > 0)
    {
      m_last->next = node;
      node->prev = m_last;
      m_last = node;
    }
    else
    {
      m_first = m_last = node;
    }
    m_size++;
  }

  void print()
  {
    if (nullptr == m_first)
    {
      std::cout << "ERROR: empty container" << std::endl;
    }
    else
    {
      Node<T> *tmp = m_first;
      std::cout << ">>";
      while (nullptr != tmp)
      {
        std::cout << " " << tmp->value;
        tmp = tmp->next;
      }
      std::cout << std::endl;
    }
  }

  size_t get_size() const
  {
    return m_size;
  }

  void erase(std::size_t pos)
  {
    if (pos < 0)
    {
      std::cout << "ERROR: invalid position for delete" << std::endl;
      return;
    }
    if (m_first == nullptr)
    {
      std::cout << "ERROR: empty container" << std::endl;
      return;
    }
    if (pos == 0)
    {
      m_first = m_first->next;
      if (nullptr != m_first)
      {
        m_first->prev = nullptr;
      }
      else
      {
        m_last = nullptr;
      }
    }
    else
    {
      Node<T> *tmp = m_first;
      int i = 0;
      while (tmp != nullptr && pos - 1 > i)
      {
        tmp = tmp->next;
        i++;
      }
      if (tmp == nullptr)
      {
        std::cout << "ERROR: deleted item not found" << std::endl;
      }
      else
      {
        tmp->prev->next = tmp->next;
        if (tmp->next != nullptr)
        {
          tmp->next->prev = tmp->prev;
        }
        else
        {
          m_last = tmp->prev;
        }
      }
      delete tmp;
    }
    m_size--;
  }

  void insert(std::size_t pos, const T &value)
  {
    Node<T> *node = new Node<T>;
    node->value = value;
    node->next = nullptr;
    node->prev = nullptr;
    if (pos < 0)
    {
      std::cout << "ERROR: invalid position for insert" << std::endl;
    }
    else if (0 == pos)
    {
      node->next = m_first;
      m_first->prev = node;
      m_first = node;
      m_size++;
    }
    else
    {
      Node<T> *tmp = m_first;
      for (int i = 0; i < pos - 1; i++)
      {
        if (tmp != nullptr)
        {
          tmp = tmp->next;
        }
      }
      if (tmp != nullptr)
      {
        node->next = tmp->next;
        node->prev = tmp;
        tmp->next = node;
        if (node->next != nullptr)
        {
          node->next->prev = node;
        }
        m_size++;
      }
      else
      {
        std::cout << "ERROR: null node" << std::endl;
      }
    }
  }

  void operator[](std::size_t pos)
  {
    if (pos < 1)
    {
      throw std::runtime_error("ERROR: invalid position");
    }
    if (m_first == nullptr)
    {
      throw std::runtime_error("ERROR: empty container");
    }
    Node<T> *tmp = m_first;
    int i = 0;
    while (tmp != nullptr && pos + 1 > i)
    {
      tmp = tmp->next;
      i++;
    }
    if (tmp == nullptr)
    {
      throw std::runtime_error("ERROR: index outside the bounds of the array");
    }
    else
    {
      return (tmp->next->value);
    }
  }

private:
  Node<T> *m_first;
  Node<T> *m_last;
  size_t m_size;
};