//?------------------------------------------
//! title: hitarth (ghost)
//` date: 2023-05-03 22:18:00
//?------------------------------------------//
#include <cstdlib>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{

     /**********pointers_reffrence.png***********/

     double *d;          //? pointer to random address
     double *y(nullptr); //. pointer to 0 or nothing
     int a = 1;          //$ declare an integer variable a and set its value to 1
     int *b = &a;        //` declare a pointer variable b that points to the address of a
     int **c = &b;       // declare a pointer-to-pointer variable c that points to the  address of b

     cout << "the address of a is " << &a << endl; // print the address of a

     cout << "value at addres of a " << *(&a) << " or as \t" << a << endl; // print the value at the address of a

     cout << "value at addres of d " << *(&d) << " or as \t" << d << endl;

     cout << "the value of b is " << b << endl; // print the value of b

     cout << "the value of adress b is " << *b << endl; // print the value at the address stored in b

     cout << "the address of b is " << &b << endl; // print the address of b

     cout << "the value of c is " << c << endl; // print the value of c

     cout << "the value of *c is " << *c << endl; // print the value at the address stored in c (which is the

     cout << "the value of **c is " << *(*c) << endl;         // print the value at the address stored in the address stored
                                                              // in c (which is the value of a)
     cout << "the value of y as a null ptr is " << y << endl; // print the value of y

     cout << "size of d is " << sizeof(d) << endl; // print the size od d

     //! the value of d is 8 , it does not matter no datatype of d as it is a address and will remain 8 constant for all data types
     double high_temp(100.7);
     double low_temp(37.2);
     double *temp_ptr;
     temp_ptr = &high_temp; // points to high_temp
     temp_ptr = &low_temp;  // now points to low_temp
     temp_ptr = nullptr;

     //! the big error that people often encounter --------------------------------------------

     int *ptrp(nullptr);
     int sz = 10;
     ptrp = &sz;
     double zsp = 102132.123;
     //$  ptrp = &zsp; compile error  "a value of type \double *\ cannot be assigned to an entity of type \int *\

     //~ derefrencing the pointer
     int score{100};

     int *score_ptr{&score}; //! most imp decralation

     cout << *score_ptr << endl; // 100

     *score_ptr = 200;

     cout << *score_ptr << endl; // 200

     cout << score << endl; // 200

     vector<string> name{"hitler", "mousoloni", "stalin"};
     vector<string> *vec_ptr(nullptr);
     vec_ptr = &name;
     cout << "name" << (*vec_ptr).at(0) << endl; //. the pointer must be in brackets asoperator precidences

     for (auto name : *vec_ptr)
     {
          cout << name << "";

          cout << endl;
          /* code */
     }
     cout << endl;

     return 0;
}
