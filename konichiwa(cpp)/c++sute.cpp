//?------------------------------------------
//! title: hitarth (ghost)
//` date: 2023-05-07 09:58:49
//?------------------------------------------//

#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;
enum Color
{
    RED,
    GREEN,
    BLUE
};

typedef double Currency; //@ Create a new type called Currency that is equivalent to double
union Number
{
    int i;
    float f;
};
struct Person
{
    std::string name;
    int age;
    bool isMale;
};
typedef struct
{
    std::string name;
    int age;
    bool isMale;
} xyz;

int main()
{
    //. struct
    Person john;
    john.name = "John Doe";
    john.age = 30;
    john.isMale = true;

    //.union
    Number n;
    n.i = 42;
    std::cout << n.f << std::endl; // Outputs: 2.8026e-45

    //. enum
    Color c = GREEN;
    if (c == RED)
    {
        std::cout << "The color is red." << std::endl;
    }

    //. typedef
    Currency balance = 1000.50; // Use the new type to declare a variable
    std::cout << "Your account balance is: $" << balance << std::endl;

    //. typedef struct
    xyz john;
    john.name = "John Doe";
    john.age = 30;
    john.isMale = true;

    return 0;
}
