//?------------------------------------------
//! title: hitarth (ghost)
//` date: 2023-05-07 10:14:58
//?------------------------------------------//
#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

void function1()
{
    cout << "the basic function" << endl;
}

void arg(int a)
{
    cout << a << endl;
}

void myFunction(string country = "Norway")
{
    cout << country << "\n";
}
int add(int a, int b)
{
    int c = a + b;
    return c;
}

//% return function
//$ The void keyword, used in the previous examples, indicates that the function should not return a value.
//$  If you want the function to return a value, you can use a data type (such as int, string, etc.)
//$ instead of void, and use the return keyword inside the function:

int main()
{

    function1(); //~ output : the bacis function
    //. a a function is a rusable block of code and helps
    //. to increase redability
    function1();

    //. paremeters
    int a;
    cin >> a;
    arg(a);

    //.default Parameters
    myFunction();

    //. multiple parameters
    int b = 9;
    add(a, b);

    return 0;
}
