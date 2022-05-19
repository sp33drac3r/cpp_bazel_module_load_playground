bool RileyRiley();
bool RileyCelebrate();

namespace riley
{
  bool NotCelebrate();
  bool OtherCelebrate();
}

int main()
{
  bool one = RileyRiley();
  bool two = RileyCelebrate();
  bool three = riley::NotCelebrate() && riley::OtherCelebrate();
  return one && two && three;
}