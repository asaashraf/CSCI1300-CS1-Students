#include <iostream>
#include <string>
using namespace std;

int main()
{
    string email = "csci1300@colorado.edu";
    // email[1]
    for(int i = 0; i < email.length(); i++)
    {
        if(email[i] == '@')
        {
            cout << "This is a valid email" << endl;
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
