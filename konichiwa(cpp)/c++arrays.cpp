//?------------------------------------------
//! title: hitarth (ghost)
//` date: 2023-05-03 22:28:30
//?------------------------------------------//
#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

int main() {

  // Declaring an array of integers with 4 elements and initializing it with
  // values
  int marks[4] = {10, 31, 19, 105};

  // Printing each element of the array
  cout << marks[0] << endl;
  cout << marks[1] << endl;
  cout << marks[2] << endl;
  cout << marks[3] << endl;

  // Declaring another array of integers with 2 elements and assigning values
  // later
  int rollno[2];
  rollno[0] = 3;
  rollno[1] = 8;

  // Getting input from the user for an array of integers with 4 elements and
  // printing them
  int array[4];
  cout << "Enter the numbers: ";
  for (size_t i = 0; i < 4; i++) {
    cin >> array[i];
  }
  cout << "The numbers are as follows:" << endl;
  for (size_t i = 0; i < 4; i++) {
    cout << array[i] << endl;
  }
  // Note: The total number of elements in an array is n, where n is the size of
  // the array. real elements is n-1 if starting from zero

  // 2d array
  int matrix[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

  // Printing the elements of the array
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }

  // arrays + pointers

  int no[4] = {1, 2, 3, 5};
  int *ptr = no;

  //@ cout<<*(ptr++);
  //@ cout<<*(Ptr);
  //? output is 1,2

  cout << "the value of no[0] is =" << *(ptr) << endl;
  cout << "the value of no[1] is =" << *(ptr + 1) << endl;
  cout << "the value of no[2] is =" << *(ptr + 2) << endl;
  cout << "the value of no[3] is =" << *(ptr + 3) << endl;

  //? pointer array loop:----
  for (size_t i = 0; i < 4; i++) {
    cout << "the value of no[" << i << "] is = " << *(ptr + i) << endl;
  }

  return 0;
}
