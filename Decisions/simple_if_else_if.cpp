#include <iostream>
using namespace std;

// program to check if a number is positive, negative or zero

int main()
{
    int num = 0;
    cout << "Enter a number: ";
    cin >> num;
    // 10
    if (num > 0)  
    {   // true
        cout << "the number is positive" << endl;
        return 0;
    }
    else if (num == 0)
    {   // true
        cout << "the number is zero" << endl;
    }
    else 
    {   // false
        cout << "the number is negative" << endl;
    }

    return 0;
}