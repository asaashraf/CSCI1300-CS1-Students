#include <iostream>

using namespace std;

void print_triangle(int side_length) // side_length = 5
{
    if (side_length < 1)
    {
        return;
    }

    print_triangle(side_length - 1);

    for (int i=0; i < side_length; i++)
    {
        cout << "[]";
    }

    cout << endl;
}

int main()
{
    cout << "Enter the side length: ";
    int input; // e.g. 5
    cin >> input;

    print_triangle(input);
    return 0;
}
