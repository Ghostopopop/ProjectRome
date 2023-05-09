//?------------------------------------------
//! author: hitarth (ghost)
//` date: 2023-05-08 09:01:54
//?------------------------------------------//

#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

void myFunction(int myNumbers[5])
{
    for (int i = 0; i < 5; i++)
    {
        cout << myNumbers[i] << "\n";
    }
}
int main()
{
    int a = 10;
    int b = 20;

    cout << "Before swap: "
         << "\n";
    cout << a << b << "\n";

    //. Call the function, which will change the values of firstNum and secondNum
    swap(a, b);

    cout << "After swap: "
         << "\n";
    cout << a << b << "\n";

    //. array function

    int myNumbers[5] = {10, 20, 30, 40, 50};
    myFunction(myNumbers);
    return 0;
}