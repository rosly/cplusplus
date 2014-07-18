#include <iostream>
using namespace std;

template<class T>
int exec(T &t)
{
  return t.exec();
}

class Some
{
  int val;

public:
  Some() : val(10) {}
  int exec()
    {
      return val;
    }
};

int main()
{
  Some some;

  cout <<exec(some) << endl;
}

