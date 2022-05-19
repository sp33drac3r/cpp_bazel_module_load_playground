#include <iostream>

namespace riley
{
  bool Celebrate()
  {
    std::cout << "in library with ID = " << ID << std::endl;
    return true;
  }

  bool OtherCelebrate()
  {
    std::cout << "in library with ID = " << ID << std::endl;
    return true;
  }
}