#include <iostream>

namespace riley
{
  bool Celebrate()
  {
    std::cout << "in library with ID = " << ID << std::endl;
    return true;
  }

  bool NotCelebrate()
  {
    std::cout << "in library with ID = " << ID << std::endl;
    return true;
  }
}