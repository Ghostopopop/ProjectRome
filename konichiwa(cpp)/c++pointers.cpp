//?------------------------------------------
//! title: hitarth (ghost)
//` date: 2023-05-03 22:18:00
//?------------------------------------------//
#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

int main() {

  /**********pointers_reffrence.png***********/

  int a = 1;    // declare an integer variable a and set its value to 1
  int *b = &a;  // declare a pointer variable b that points to the address of a
  int **c = &b; // declare a pointer-to-pointer variable c that points to the
                // address of b

  cout << "the address of a is " << &a << endl; // print the address of a
  cout << "value at addres of a " << *(&a)
       << endl; // print the value at the address of a
  cout << "the value of b is " << b << endl; // print the value of b
  cout << "the value of adress b is " << *b
       << endl; // print the value at the address stored in b
  cout << "the address of b is " << &b << endl; // print the address of b
  cout << "the value of c is " << c << endl;    // print the value of c
  cout << "the value of *c is " << *c
       << endl; // print the value at the address stored in c (which is the
                // address of b)
  cout << "the value of **c is " << *(*c)
       << endl; // print the value at the address stored in the address stored
                // in c (which is the value of a)

  /*  output
  the address of a is 0x61fe14
  value at addres of a 1
  the value of b is 0x61fe14
  the value of adress b is 1
  the address of  b is 0x61fe08
  the value  of  c is 0x61fe08
  the value  of  *c is 0x61fe14
  the value  of  **c is 1
  */

  return 0;
}
