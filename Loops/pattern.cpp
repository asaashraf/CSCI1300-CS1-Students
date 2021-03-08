#include <iostream>

using namespace std;

/*   01234
   0 !----
   1 -!---
   2 --!--
   3 ---!-
   4 ----!
*/

int main()
{
    for(int i=0; i< 5; i++)
    {
        for(int j=0; j< 5; j++)
        {
            if(i == j)
            {
                cout << "!";
                }
            else 
            {
                cout << "-";
            }
        }
        cout << endl;
    }
    
    
    return 0;
}