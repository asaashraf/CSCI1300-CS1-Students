#include <iostream>

using namespace std;
// This program picks up 10 stamps from a box

int main()
{
    for(int i = 0; i < 10; i++)
    {
        if(i == 9)
        {
            cout << "You now have 10 stamps!" << endl;
        }
    }
    return 0;
}

