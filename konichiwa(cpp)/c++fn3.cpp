//?------------------------------------------
//! author: hitarth (ghost)
//` date: 2023-05-09 12:17:01
//?------------------------------------------//
#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;
const float pi = 3.14;
//.function overloding
float area(float a)
{
    return a * pi * a;
}

float area(float x, float Y)
{
    return 2 * x * Y;
}

//. recursion

int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}
int sum(int k)
{
    if (k > 0)
    {
        return k + sum(k - 1);
    }
    else
    {
        return 0;
    }
}

int j = 5;

//! imp
int &foo()
{
    return j;
}

int main()
{
    char c;
    cin >> c;
    if ('c' == 99)
    {

        float x;
        cin >> x;
        cout << area(x) << endl;
    }
    else
    {
        float z, y;
        cin >> z >> y;
        cout << area(z, y) << endl;
    }

    int result = sum(10);
    cout << result << endl;

    int ans = factorial(8);
    cout << ans << endl;

    // $ When we use a reference to modify the object it refers to, it actually modifies
    // ?  the original object. In this case, the foo() function returns a reference to x,
    // $  which means that any changes made to the reference returned by foo()
    // ` will modify the original variable x.

    // $In the main() function, the code calls foo() and assigns the value of 10
    // ?to the reference returned by the function. This means that
    // $the value of the global variable x is now 10.

    foo() = 10;
    std::cout << j << std::endl; // prints 10

    return 0;
}