#include <iostream>
#include <cmath>

using namespace std;

// this is my program
int main()
{
    // Arithmetic operations
    int a = 10;
    int b = 20;

    // cout << "This is an example stmt .   " << endl;
    // cout << "Value of a " << a << endl;
    
    // addition
    int add = a + b;
    // int d = a + 10 + b;
    cout << "Addition: " << a << " + " << b << " = "<<  add << endl;

    // subtraction
    int subtract = a - b;
    cout << "Subtraction: " << a << " - " << b << " = "<< subtract << endl;
    
    // multiplication
    int product = a * b;
    cout << "Multiplication: " << a << " * " << b << " = "<< product << endl;

    // Division: quotient
    int c = 57;
    int quotient = c / a;
    cout << "Quotient: " << c << " / " << a << " = "<< quotient << endl; // 5

    // Division: remainder
    int remainder = c % a;
    cout << "Remainder: " << c << " % " << a << " = "<< remainder << endl;  // 7

    // Expressions
    // a = 10; b = 20; c = 57;
    int exp_1 = (-(b * b - 4 * a * c) / (2 * a));
    cout << exp_1 << endl;

    // powers and roots
    // a new library <cmath>
    // pow (base, exponent) -> base power exponent
   
    double val_1 = b * pow(a, b);
    cout << val_1 << endl;
    
    
    int num1 = 5;
    cout << "num1 = " << num1 << endl;
    
    // increment
    num1++;   // evaluates to num1 = num1 + 1
    cout << "num1++ = " << num1 << endl;  // 6

    // decrement
    num1--;   // evaluates to num1 = num1 - 1
    cout << "num1-- = " << num1 << endl;  // 5

    // num1/=5; // num1 = num1 + 5
    return 0;
}
