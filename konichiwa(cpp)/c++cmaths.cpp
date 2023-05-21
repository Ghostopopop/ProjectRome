//?------------------------------------------
//! author: hitarth (ghost)
//` date: 2023-05-13 08:05:21
//?------------------------------------------//
#include <iostream>
#include <vector>
#include <cstdlib>
#include <cmath> //! cmath reruired
using namespace std;

int main()
{

    // Example of the ceiling function (ceil)
    double num1 = 2.3;
    double ceiling = ceil(num1);
    cout << "The ceiling of " << num1 << " is: " << ceiling << endl;

    // Example of the floor function (floor)
    double num2 = 2.7;
    double floor_val = floor(num2);
    cout << "The floor of " << num2 << " is: " << floor_val << endl;

    // Example of the exponential function (exp)
    double num3 = 2.0;
    double exponential = exp(num3);
    cout << "The exponential of " << num3 << " is: " << exponential << endl;

    // Example of the power function (pow) with floating point numbers
    double base2 = 2.5, exponent2 = 2.0;
    double result2 = pow(base2, exponent2);
    cout << "The result of " << base2 << " raised to the power of " << exponent2 << " is: " << result2 << endl;

    // Example of the square root function (sqrt) with floating point numbers
    double num4 = 2.5;
    double sqroot2 = sqrt(num4);
    cout << "The square root of " << num4 << " is: " << sqroot2 << endl;

    // Example of the hypotenuse function (hypot)
    double side1 = 3.0, side2 = 4.0;
    double hypotenuse = hypot(side1, side2);
    cout << "The hypotenuse of a right triangle with sides " << side1 << " and " << side2 << " is: " << hypotenuse << endl;

    // Example of the arc tangent function (atan)
    double num5 = 1.0;
    double arctan = atan(num5);
    cout << "The arctangent of " << num5 << " is: " << arctan << endl;

    // Example of the trigonometric functions
    double angle = 45;
    double radians = angle * 3.14 / 180.0; // Convert angle to radians
    double sine = sin(radians);
    double cosine = cos(radians);
    double tangent = tan(radians);
    cout << "The sine of " << angle << " degrees is: " << sine << endl;
    cout << "The cosine of " << angle << " degrees is: " << cosine << endl;
    cout << "The tangent of " << angle << " degrees is: " << tangent << endl;

    // Example of the minimum function (fmin) with floating point numbers
    double numz = 3.0, num9 = 2.0;
    double min_v = fmin(numz, num9);
    cout << "The minimum value between " << numz << " and " << num9 << " is: " << min_v << endl;

    // Example of the maximum function (fmax) with floating point numbers
    double num10 = 3.0, num11 = 2.0;
    double max_v = fmax(num10, num11);
    cout << "The maximum value between " << num10 << " and " << num11 << " is: " << max_v << endl;

    // Example of the cube root function (cbrt)
    double num13 = 27.0;
    double cuberoot = cbrt(num13);
    cout << "The cube root of " << num13 << " is: " << cuberoot << endl;

    // Example of the natural logarithm function (log)
    double num29 = 2.0;
    double natural_log = log(num29);
    cout << "The natural logarithm of " << num29 << " is: " << natural_log << endl;

    // Example of the minimum function (min)
    int nu = 5, num40 = 3;
    int min_val = min(nu, num40);
    cout << "The minimum value between " << nu << " and " << num40 << " is: " << min_val << endl;

    // Example of the maximum function (max)
    double numk = 4.5, nump = 2.5;
    double max_val = max(numk, nump);
    cout << "The maximum value between " << numk << " and " << nump << " is: " << max_val << endl;

    // Example of the round function (round)
    double nume = 2.3;
    int rounded_val = round(nume);
    cout << "The rounded value of " << nume << " is: " << rounded_val << endl;

    // Example of the absolute value function (abs) with integers
    int num8 = -3;
    int abs_val = abs(num8);
    cout << "The absolute value of " << num8 << " is: " << abs_val << endl;

    // Example of the absolute value function (fabs) with floating point numbers
    double num56 = -3.0;
    double fabs_val = fabs(num56);
    cout << "The absolute value of " << num56 << " is: " << fabs_val << endl;

    //! imp
    double numg = 3.14159;
    double intpart, decpart;
    decpart = std::modf(numg, &intpart);
    std::cout << "The decimal part of " << numg << " is " << decpart << std::endl;
    //.The decimal part of 3.14159 is 0.14159

    return 0;
}