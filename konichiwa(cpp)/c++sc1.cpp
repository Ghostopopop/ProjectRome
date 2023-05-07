//?------------------------------------------
//! title: hitarth (ghost)
//` date: 2023-05-03 16:21:24
//?------------------------------------------//
#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int a, b;
  // some of most simple if else
  cin >> a >> b;
  if (a == b) {
    cout << "a is equal to b";
  } else if (a > b) {
    cout << "a is greater then b";
  } else {
    cout << " b is greater than a";
  }

  // switch  case

  int day = 4;
  switch (day) {
  case 1:
    cout << "Monday";
    break;
  case 2:
    cout << "Tuesday";
    break;
  case 3:
    cout << "Wednesday";
    break;
  case 4:
    cout << "Thursday";
    break;
  case 5:
    cout << "Friday";
    break;
  case 6:
    cout << "Saturday";
    break;
  case 7:
    cout << "Sunday";
    break;
  default:
    cout << "error";
  }
  // break is to stop for cheking the macth is been found
  // default is just default and is not nessesery to include in.

  return 0;
}
