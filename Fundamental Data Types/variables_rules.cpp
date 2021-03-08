#include <iostream>
using namespace std;

// how do comments work?
// this is my program
/*
this is a multi line comment
more info
i/p: 
o/p:
1. ...
2. ...
*/
int main()
{

    // A variable must have a type and a name. You can assign it an initial value but it's not mandatory
    // data_type name;
    // data types: boolean, char, int, float, double, string
    // 1 byte = 8 bits

    // boolean -> 1 bit
    bool check; // variable definition/declaration
    check = 0; // variable initialization

    bool check1 = 1;
    // char    -> 1 byte
    char var1 = 's';
    // char var2 = "r";
    // char var2 = 2;
    // string

    // integer: positive or negative whole numbers
    // short int -> 2 bytes
    // int       -> 4 bytes ( -2,147,483,648 to +2,147,483,647)
    // long int  -> 8 bytes
    int number1 = -10;
    short int num2 = 2;

    // decimal/floating point data
    // float       -> 4 bytes  (7 decimal digits of precision)
    // double      -> 8 bytes  (15 decimal digits of precision)
    // long double -> 16 bytes (~30 decimal digits of precision)
    double num3 = 12.6;

    // positive whole numbers
    // unsigned int      -> 4 bytes
    // unsigned long int -> 8 bytes

    int num1; // definition or declaration


    // initialization

    // one definition per variable
    int num3 = 10;
    int num3;
    char num3;


    // Rules for variable names/identifiers and initial value:
    // Error #1: name must start with a character or _

    int _num = 10;  // 123num violates variable naming rules
    // int 123num;

    // Error #2: you cannot use a reserved word as a variable name
    // float, int, new, class, if, main, cout are a few of the reserved words we cannot use for variable names
    float float12;
    // Error #3: some symbols are not allowed. cannot have spaces in the name
    // . / are few symbols that we can't use for variable names
    

    /* 
    c++ style guide:  https://google.github.io/styleguide/cppguide.html
    Naming convention: https://google.github.io/styleguide/cppguide.html#Naming
    */
    // MEANINGFUL NAMES!!!
    int we_can_do_this;  // I will use this naming convention for variables
    int weCanDoThis; //eg: camel case naming convention; for functions

    // Error #4: the initial value MUST MATCH the declared type. All the time?
    // Answer: not always
    int num10 = 105.7;  // A warning displayed in the console and c++ implicity casts 105 to 10
    
    
    
    // Modifying the value of variable via assignment statement. cout to see the updated value
    num10 = 20;
    num10 = num2 + 20;
    
    // Typecasting: int to double, double to int, int to char, char to int
    // implicit vs. explicit

    // static_cast <data_type> (variable_name) or (data_type)variable_name
    num10 = (int)105.7;  // explicitly casting a decimal value to an integer
    num10 = static_cast<int> (105.7);
    
    // constants
        // convention to name constant variables in CAPS
    const int PRICE = 10;

    // Error: cannot modify value of a constant variable
    // PRICE = PRICE * 10;  // will not compile
    // PRICE = 75;  // will not compile
    
    

    return 0;
}