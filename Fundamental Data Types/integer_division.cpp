#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Dividing two variables of type int: integer
    int num_1 = 37;
    int num_2 = 13;
    cout << "Dividing two integer variables: " << num_1 / num_2 << endl;

    // Dividing two variables of type double: double
    double num_3 = 23;
    double num_4 = 7;

    cout << "Dividing two double variables: " << num_3 / num_4 << endl;

    // Dividing two variables of different types: double, as long as one is double

    cout << "Dividing two variables of different types:" << num_1 / num_3 << endl;

    cout << "Dividing two variables of different types:" << num_2 / num_4 << endl;
    

    int a,b;
    double c;

    a = 17;
    b = 5;
    c = (double)(a/b);  // 3.0
    cout << fixed << setprecision(1) << endl;
    cout << "17/5 = " << a/b << "\n" ;                      // 3
    cout << "17.0/5 = " << (double)a/b << endl;             // 3.4
    cout << "17/5.0 = " << a / (double)b << endl;           // 3.4
    cout << "17/5 = " << (double) (a/b) << endl;            // 3.0
    cout << "c = " << c << endl;                            // 3.0
    cout << "c/2 = " << c/2 << endl;                        // 1.5
    cout << "(a/b) / 2 = " << (double)(a/b) /2 << endl;     // 1.5
    cout << "(a/b) / 2 = " << (double)((a/b) /2) << endl;   // 1.0
    cout << "a/b/2 = " << a/b/2 << endl;                    // 1

    // "Highest-order operand" determines type of arithmetic "precision" performed

    cout << "(1/2/3.0/4) = " << 1/2/3.0/4 << endl;          // 0.0
    return 0;
}
