#include <cctype>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    ifstream in1;

    string filename;
    cout << "Enter filename: ";
    getline(cin, filename); // input from user
    in1.open(filename); // Open file "babynames.txt"

    if (in1.fail())
    {
        cout << "File couldn't be opened!" << endl;
        return -1;
    }

    string name;
    int rank;
    double percent;
    string names[2000];
    int ranks[2000];  // seg fault if array cannot store all file data

    int i=0;
    while(!in1.eof())  // e.g: Michael 462085 2983
    {
        in1 >> name >> rank >> percent;
        names[i] = name;
        ranks[i] = rank; // names[0] = "Michael" ranks[0]=462085
        i++;
    }

    for (int i=0; i<10; i++)
    {
        cout << "Name: " << names[i] << setw(10) << " Rank: " << ranks[i] << endl;
    }

    in1.close();

    return 0;
}