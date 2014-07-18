#include <iostream>
#include "rand.hpp"

using namespace std;

enum {
  COUNT = 10,
};

int main()
{
  Urand<COUNT> u;

  for(int i = 0; i < COUNT; ++i)
    {
      cout << u() <<' ';
    }
  cout << endl;
}

