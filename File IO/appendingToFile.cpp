#include <cctype>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
   // 1. create file stream objects/variables
   ifstream in1;
   ofstream out1;
   
   // 2. Associate the file stream object with the file
   //    by using .open(), with the file name (as a string) in parentheses
   string filename;
   cout << "Enter filename: ";
   getline(cin, filename);
   in1.open(filename); // Open file
   out1.open(filename, ios::app); // out1 << "write this";
   string line;
   string arr[4];
   int i=0;

   if (in1.fail())
    {
        cout << "File couldn't be opened!" << endl;
        return -1;
    }

   // 3. Read lines from file
   while (getline(in1, line))
   {
      // 4. process each line
      // check if there is any content in that line
          // line == ""; line = " "
      if(line.length()>0)
      {
         arr[i] = line;
      }
      i++;
   }

   // cout << "finished reading" << endl ;
   out1 << endl << endl;
   for(int i=0; i<4; i++)
   {
      out1 << arr[i] << endl;
   }

   // 6. close files
   in1.close();
   out1.close();
   return 0;
}
