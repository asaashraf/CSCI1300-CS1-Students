#include <iostream>
using namespace std;

int main()
{
    int intA, intB;
    intA = 0;
    intA++;  // intA = intA + 1  
    intB = 0;
    ++intB;  // intB = intB + 1
    cout << "intA = " << intA << " and intB = " << intB << endl;


    intA = 2;
    intB = 2 * (intA++); // first use OLD value in expression, then increment
    cout << "intA = " << intA << " and intB = " << intB << endl; // 4/6

    // same as
    // intA = 2;
    // intB = 2 * intA;
    // intA = intA + 1;
    // cout << "intA = " << intA << " and intB = " << intB << endl;

    intA = 2;
    intB = 2 * ++intA; //3  first increment, then use NEW value in expression
    cout << "intA = " << intA << " and intB = " << intB << endl; // 6
    // same as
    // intA = 2;
    // intA = intA + 1;
    // intB = 2 * intA;
    // cout << "intA = " << intA << " and intB = " << intB << endl;

    // Note: the value of the variable incremented (intA) is the same in both situations
    
    return 0;
}
