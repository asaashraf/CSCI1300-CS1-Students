#include <iostream>
#include <string>
#include <assert.h>
using  namespace std;

// Function that takes a string input and converts the letters into lowercase
// and replaces the spaces with an underscore
string modifyText(string text)
{
    for(int i=0; i<text.length(); i++)
    {
        if(text[i] >= 65 && text[i] <= 90)
            text[i] += 32;
        else if(text[i] == ' ')
            text[i] = '_';
    }
    return text;
}

int main()
{
    assert("university_of_colorado_boulder" == modifyText("University of Colorado Boulder"));
    assert("a_b_c_d_e" == modifyText("A_B_C_D_E"));
    return 0;
}