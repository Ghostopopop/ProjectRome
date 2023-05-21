//?------------------------------------------
//! author: hitarth (ghost)
//` date: 2023-05-08 09:01:54
//?------------------------------------------//

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
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

    int random_number{};
    size_t count(10);
    // number of random numbers to generate
    int min(1);
    // lower bound (inclusive)
    int max(6); // upper bound (inclusive)
    // seed the random number generator
    // If you don't seed the generator you will get the same requence random numbers every run
    cout << "RAND_MAX on my system is" << RAND_MAX << endl;
    srand(time(nullptr));
    for (size_t i(1); i <= count; ++i)
    {
        // generate a random number [min, max)
        random_number = rand() % max + min;
        cout << random_number << endl;
    }
    for (size_t i = 0; i <= count; i++)
    {
        /* code */
    }

    return 0;
}