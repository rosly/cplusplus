#ifndef __URAND_H__
#define __URAND_H__

#include <bitset>
#include <cstddef>
#include <cstdlib>
#include <ctime>
#include <cstring>

using std::size_t;
using std::bitset;

template<size_t upper_bound>
class Urand
{
  bitset<upper_bound> used;

public:
  Urand()
    {
      srand(time(0));
    }
  size_t operator()();
};

template<size_t upper_bound> inline size_t Urand<upper_bound>::operator()()
{
  if (used.count() == upper_bound)
    {
      used.reset();
    }

    size_t newval;
    while (used[newval = rand() % upper_bound]);
    used[newval] = true;
    return newval;
}

#endif

