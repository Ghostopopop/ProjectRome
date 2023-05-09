//?------------------------------------------
//! title: hitarth (ghost)
//` date: 2023-05-03 16:46:28
//?------------------------------------------//
#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;
// loops
int main()
{

  // for loop
  for (size_t i = 0; i < 9; i++)
  {
    cout << i << endl;
  }

  // while loop
  int t = 0;
  while (t < 5)
  {
    cout << t << "\n";
    t++;
  }

  // do while loop
  int i = 0;
  do
  {
    cout << i << "\n";
    i++;
  } while (i < 5);

  // break and continew

  while (i < 10)
  {
    cout << i << "\n";
    i++;
    if (i == 4)
    {
      break;
    }
  } // output 0 1 2 3

  for (int i = 0; i < 10; i++)
  {
    if (i == 4)
    {
      continue;
    }
    cout << i << "\n";
  }

  std::vector<int> numbers = {1, 2, 3, 4, 5};

  for (int num : numbers)
  {
    std::cout << num << " ";
  }

  return 0;
}
