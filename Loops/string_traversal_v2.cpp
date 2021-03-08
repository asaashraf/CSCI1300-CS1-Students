#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str = "csci1300@colorado.edu";
    int flag = -1;
    // check if str is a valid email
    for(int i=0; i<str.length(); i++)
    {
        if(str[i]=='@'){
            flag = 0;
            // cout << "It is an email address" << endl;
        }
        if (".edu" == str.substr(i,4) && flag == 0){
            cout << "It is a valid email address" << endl;
        }

    }

    // substring
    // string_var.substr(starting_position,num_of_characters)
    string str1 = "We are searching for substring. It may be at the start or at the end.";
    for (int i=0; i< str1.length(); i++)
    {
        if ("substring" == str1.substr(i,9)){
            cout << "We found substring at " << i << endl; 
        }
    }

    // check if str is a valid email
    // int i=0;
    // while(i<str.length()){
    //     if(str[i]=='@'){
    //         cout << "It is an email address" << endl;
    //     }
    //     i++;
    // }
    
    return 0;
}