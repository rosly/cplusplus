#include <iostream>
#include <bitset>
#include "template_arg.hpp"

using namespace std;
using std::bitset;

enum {
  COUNT = 10,
};

int main()
{
  Urand< standard_bitset<20> > u;

  for(int i = 0; i < COUNT; ++i)
    {
      cout << u() <<' ';
    }
  cout << endl;
}

