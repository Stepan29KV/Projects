#include <iostream>


template <class T>
class SerialContainer
{
public:
  SerialContainer()
  {
    m_capacity = 0;
    m_size = 0;
    m_data = nullptr;
  };

  ~SerialContainer()
  {
    delete[] m_data;
  };

  T &operator[](size_t index) const
  {
    return m_data[index];
  };

  size_t get_size() const
  {
    return m_size;
  }

  void push_back(const T &value)
  {
    check_capacity();
    m_data[m_size++] = value;
  };

  void erase(size_t pos)
  {
    for (size_t i = pos; i < m_size; i++)
    {
      m_data[i - 1] = m_data[i];
    }
    resize_data(m_size - 1);
  }

  void insert(std::size_t pos, const T &value)
  {
    check_capacity();
    for (size_t i = 0; i <= m_size - pos; i++)
    {
      m_data[m_size - i + 1] = m_data[m_size - i];
    }
    m_data[pos] = value;
    m_size++;
  }

  void print()
  {
    std::cout << ">> ";
    for (int i = 0; i < m_size; i++)
    {
      std::cout << m_data[i] << " ";
    }
    std::cout << std::endl;
  }

private:
  size_t m_size;
  size_t m_capacity;
  T *m_data;

  void reserve_data(size_t size)
  {
    T *tmp = new T[size];
    std::copy(m_data, m_data + m_size, tmp);
    m_capacity = size;
    delete[] m_data;
    m_data = tmp;
  }

  void check_capacity()
  {
    if (m_size >= m_capacity)
    {
      if (m_capacity == 0)
        reserve_data(m_capacity + 1);
      else
        reserve_data(m_capacity * 2);
    }
  }

  void resize_data(size_t size)
  {
    m_size = size;
  }
};