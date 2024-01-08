#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x = 5, y = 16;
    double z = 2.6;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    // There are built-in math functions like max() and min()
    cout << "max(x, y) = " << max(x, y) << endl;
    cout << "min(x, y) = " << min(x, y) << endl;

    // There are also math extensions built into the <cmath> library
    cout << "log(x)    = " << log(x) << endl;
    cout << "sqrt(y)   = " << sqrt(y) << endl;
    cout << "round(z)  = " << round(z) << endl;

    return 0;
}

/*
    Math Functions:

    Function        Description
    abs(x)	        Returns the absolute value of x
    acos(x)	        Returns the arccosine of x
    asin(x)	        Returns the arcsine of x
    atan(x)	        Returns the arctangent of x
    cbrt(x)	        Returns the cube root of x
    ceil(x)	        Returns the value of x rounded up to its nearest integer
    cos(x)	        Returns the cosine of x
    cosh(x)	        Returns the hyperbolic cosine of x
    exp(x)	        Returns the value of Eˣ
    expm1(x)	    Returns eˣ - 1
    fabs(x)	        Returns the absolute value of a floating x
    fdim(x, y)	    Returns the positive difference between x and y
    floor(x)	    Returns the value of x rounded down to its nearest integer
    hypot(x, y)	    Returns sqrt(x² + y²) without intermediate overflow or underflow
    fma(x, y, z)	Returns x * y + z without losing precision
    fmax(x, y)	    Returns the highest value of a floating x and y
    fmin(x, y)	    Returns the lowest value of a floating x and y
    fmod(x, y)	    Returns the floating point remainder of x/y
    pow(x, y)	    Returns the value of x to the power of y (xʸ)
    sin(x)	        Returns the sine of x (x is in radians)
    sinh(x)	        Returns the hyperbolic sine of a double value
    tan(x)	        Returns the tangent of an angle
    tanh(x)	        Returns the hyperbolic tangent of a double value
 */