#include <cctype>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    // 1. create file stream objects/variables

    // ifstream means input file stream - used for reading from files
    ifstream in1;

    // 2. Associate the file stream object with the file
    //    by using .open(), with the file name (as a string) in parentheses

    in1.open("test.txt"); // Open input file
    string line;

    // 3. Check if file opened successfully
    if (in1.fail())
    {
        cout << "File couldn't be opened!" << endl;
        return -1;
    }
    int total = 0;
    // 4. Read lines from file
    while (getline(in1, line))  // stray \n // in1 >> name >> population
    {
        // 5. process each line
        // check if there is any content in that line; line != ""; line != " "; !line.empty()
        if(line.length() > 0)
        {
            total += stoi(line);
        }
    }
     cout << "Total = " << total << endl;

    // 6. close files
    in1.close();
    return 0;
}
