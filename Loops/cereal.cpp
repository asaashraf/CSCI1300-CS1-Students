#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    // How many spoonfuls of fruit loops should I eat every morning?
    int maximum = 14;  //this is the maximum number of FL I can have = 1 serving
    int spoon = 5;      //how many FL in a spoonful?
    int total = 0;
    int count = 0;
    while(total < maximum)
    {
        // add spoon to total   
        total = total + spoon; // total+=spoon
        // increment spoon/counter
        count++;
    }
    cout << "you have had " << count << " spoons of fruit loops today" << endl;
    return 0;
}