#include <bits/stdc++.h>
using namespace std;

class PlayingWithPlanks
{
  public:
  void canItBeDone(int plankLength, int pieces)
  {
    long long val = (long long) pieces * (pieces + 1) / 2;
    if (val > plankLength)
    {
      cout<<"Impossible";
    }
    else
      cout<<"Possible";
  }
};

int main()
{
    PlayingWithPlanks p1;
    p1.canItBeDone(9,3);
    return 0;
}
