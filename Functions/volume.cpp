#include <iostream>

using namespace std;

/*
    What does the function do?
    @param: parameter list + data type
    @return: return value + data type
*/

// int function_name()
// {
//     // code here
//     return 0;
// }

// void function2()
// {
//     cout << "This is a void function";
// }


/*
    This function calculates the volume of a cube
    @param: length of the cube (double)
    @return: volume of the cube (double)
*/

double cube_volume(double side_length)
{
    double volume = side_length * side_length * side_length;
    return volume;
}


int main()
{
    double side, volume=0;
    side = 15;
    volume = cube_volume(side);
    cout << "Volume of cube is: " << volume << endl;
    return 0;
}
