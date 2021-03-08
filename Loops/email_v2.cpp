#include <iostream>
#include <string>
using namespace std;
// string_var.substr(starting_position,num_of_characters)
int main()
{
    string email = "csci1300@colorado.edu";
    // email[1]
    int len = email.length();
    bool flag = 0;
    if (email.substr(len-4, 4)== ".edu")
    {
        flag =1;
    }
    for(int i = 0; i < len; i++)
    {
        if(email[i] == '@' && flag == 1)
        {
            cout << "This is a valid .edu email" << endl;
            break;
        }
        cout << i << endl;
    }
    return 0;
}






//     bool flag = false;
//     int i = 0;
//     string mySubstring;

//     string lookup = ".com";     // look for ".com"

//     for(i=0; i < email.length() - lookup.length() + 1; i++)
//     {
//         mySubstring = email.substr(i,lookup.length());
//         if (mySubstring == lookup)
//         {
//             flag = true;
//         }
//     }
//     if (flag == true)
//     {
//         cout << "You have mail!!!";
//     }
//     else
//     {
//         cout << "Invalid input";
//     }
//     i = 0;
//     int count = 0;
//     while (i < email.length() && count < 1) 
//     {
//         if (email[i] == '@') {
//             cout << "You have mail!";
//             count++;
//         }
//         i++;
//     }
