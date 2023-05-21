//?------------------------------------------
//! author: hitarth (ghost)
//` date: 2023-05-13 08:39:39
//?------------------------------------------//
#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;
// Example 5: deducing the return type of a function
auto get_sum(int x, int y)
{
    return x + y;
} // the return type is deduced to be int
int main()
{

    // Example 1: deducing the type of a simple variable
    auto i = 42; // the type of i is deduced to be int

    // Example 2: deducing the type of a variable from an expression
    auto sum = 1 + 2.5; // the type of sum is deduced to be double

    // Example 3: deducing the type of a variable from a lambda expression
    auto func = [](int x, int y)
    { return x + y; }; // the type of func is deduced to be a lambda function

    // Example 4: deducing the type of a variable from a complex nested type
    vector<pair<string, vector<int>>> data;
    auto iter = data.begin(); // the type of iter is deduced to be vector<pair<string, vector<int>>>::iterator

    std::vector<int> v = {1, 2, 3, 4, 5};
    for (auto i : v)
    {
        std::cout << i << ' ';
    }
    // Output: 1 2 3 4 5

    return 0;
}