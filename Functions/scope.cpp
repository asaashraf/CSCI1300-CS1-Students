#include <iostream>

using namespace std;
// This program picks up 10 items from a box

int item = 3; // this is an example of a global variable; bad practice


void count_items(int num, string items) // parameters
{
    // num and items are local variables and only available inside the count_items function
    for(int i = 0; i < num; i++) // i is a local variable and only available inside the for loop; braces
    {
        if(i == num-1)
        {
            cout << "You now have " << num << " " << items << "!" << endl;
        }
    }
}

int main()
{
    int number = 0; // number is a local variable; only available inside main function
    cout << "Enter a number: ";
    cin >> number;
    count_items(number, "stamps");// arguments
    return 0;
}