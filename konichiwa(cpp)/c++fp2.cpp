//?------------------------------------------
//! title: hitarth (ghost)
//` date: 2023-05-03 13:54:14
//?------------------------------------------//
#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;
// focus opperator and bassics of standard input and and output.
int main() {
  int a, b;
  // input and output
  std::cout << "konichiwa" << std::endl;
  // cout is used to output to shell
  // :: is scope ressoulution operator
  // << s caled insertion opperator
  std::cin >> a >> b;
  // cin is used to grt user input
  // >> is extraction opperator

  //? operators in c++
  //@ arthmatic operators
  cout << "the value of a + b is " << a + b << endl;
  cout << "the value of a - b is " << a - b << endl;
  cout << "the value of a * b is " << a * b << endl;
  cout << "the value of a / b is " << a / b << endl;
  cout << "the value of a % b is " << a % b << endl;
  cout << "the value of a++ is " << a++ << endl;
  cout << "the value of a-- is " << a-- << endl;
  cout << "the value of ++a is " << ++a << endl;
  cout << "the value of --a is " << --a << endl;
  cout << endl;

  //@ comperasion operators
  //? returns bool values
  cout << "the value of a==b " << (a == b) << endl;
  cout << "the value of a!=b " << (a != b) << endl;
  cout << "the value of a<=b " << (a <= b) << endl;
  cout << "the value of a>=b " << (a >= b) << endl;
  cout << "the value of a<b " << (a < b) << endl;
  cout << "the value of a>b " << (a > b) << endl;
  cout << endl;

  //@ logical opperator
  // # returns bool values

  cout << "the value of a==b&&a<b " << ((a == b) && (a < b)) << endl;
  cout << "the value of a>=b||a==b " << ((a >= b) || (a == b)) << endl;
  cout << "the value of !a==b " << (!(a == b)) << endl;

  // other opperator
  /* Bitwise Operators:
  & (Bitwise AND)
  | (Bitwise OR)
  ^ (Bitwise XOR)
  ~ (Bitwise NOT)
  << (Left Shift)
  >>(Right Shift)
  */

  /*
  = (Assignment)
  += (Addition Assignment)
  -= (Subtraction Assignment)
  *= (Multiplication Assignment)
  /= (Division Assignment)
  %= (Modulus Assignment)
  &= (Bitwise AND Assignment)
  |= (Bitwise OR Assignment)
  ^= (Bitwise XOR Assignment)
  <<= (Left Shift Assignment)
  =>>(Right Shift Assignment)
  */

  /*Ternary Operator:
  ? : (Conditional Operator)
  Cast Casting operators convert one data type to another.
  int(4.350) would return 4.

  Dot Operator:
  . (Accesses a member variable or function of an object)

  Pointer Operator:
  * (Declares a pointer or dereferences a pointer)
  & (Returns the address of a variable)
  */

  return 0;
}
