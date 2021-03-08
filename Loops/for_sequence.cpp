#include <iostream>

using namespace std;
/*
    for (initialization; condition; update)
    { 
        statements; // also called loop boy
    }

*/

int main()
{
    int num = 0;
    cout << "Enter a number: " << endl;
    cin >> num;
    cout << "ascending order" << endl;
    for (int count=0; count <=num; count++)
    {
        cout << count << endl;
    }
    cout << "descending order" << endl;
    for (int count=num; count != 0; count--)
    { 
        cout << count << endl;
    }

    return 0;
}