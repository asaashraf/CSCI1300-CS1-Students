#include <iostream>

using namespace std;

int main()
{
    int num = 0;
    cout << "Enter a number: " << endl;
    cin >> num;
    int count = 1; // initialization
    while(count <= num) // loop condition
    {
        cout << count << endl;
        count++; // update
    }
    cout << count << endl;
    return 0;
}