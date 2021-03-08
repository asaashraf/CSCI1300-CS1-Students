#include <iostream>

using namespace std;
// This program picks up 10 stamps from a box

void count_items(int num, string items) // parameters
{
    for(int i = 0; i < num; i++)
    {
        if(i == num-1)
        {
            cout << "You now have " << num << " " << items << "!" << endl;
        }
    }
}

int main()
{
    int number = 0;
    cout << "Enter a number: ";
    cin >> number;
    count_items(number, "stamps");// arguments
    return 0;
}