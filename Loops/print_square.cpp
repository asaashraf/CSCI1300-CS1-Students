#include <iostream>

using namespace std;

/*
    ****
    ****
    ****
    ****
*/

int main()
{
    //  ****
    int num = 0;
    cout << "Enter a number: "<< endl;
    cin >> num;
    // cout << "****";
    for (int j = 0; j < num; j++) // outer loop
    {
        // cout << "Outer loop:" << j << endl;
        for(int i = 0; i< num; i++) // inner loop
        {
            cout << "*";
            // cout << "Inner loop:" << i << endl;
        }
        cout << endl;
    }
    
    
    
    return 0;
}