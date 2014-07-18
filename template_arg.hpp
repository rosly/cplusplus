#ifndef __URAND_H__
#define __URAND_H__

#include <bitset>
#include <cstddef>
#include <cstdlib>
#include <ctime>
#include <cstring>

using std::size_t;
using std::bitset;

template<size_t N = 10>
class standard_bitset : bitset<N> {};

template<template<size_t upper_bound = 10> class container>
class Urand
{
  container<> used;

public:
  Urand()
    {
      srand(time(0));
    }
  size_t operator()()
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
};

#endif

