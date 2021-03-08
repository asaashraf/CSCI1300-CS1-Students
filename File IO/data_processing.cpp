#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    ifstream in_file;
    in_file.open("test1.txt");

    string line;
    string index, value;
    int num;

    if (in_file.fail())
    {
        cout << "File couldn't be opened!" << endl;
        return -1;
    }

    getline(in_file, line); // just for processing the header line; not used anywhere in the program

    while(!in_file.eof()) 
    {
        in_file >> index >> value;
        num = stoi(value);
        cout << index << " " << value << endl;  
    } 
    return 0;
}
