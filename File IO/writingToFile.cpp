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
   
   // oftsream means output file stream - used for writing to files
   ofstream out1;
   
   // 2. Associate the file stream object with the file
   //    by using .open(), with the file name (as a string) in parentheses
 
   in1.open("worldpop.txt"); // Open input file
   out1.open("world_pop_density.txt"); // Open output file

   string line;
   long int total;

   if (in1.fail())
    {
        cout << "File couldn't be opened!" << endl;
        return -1;
    }

   // 3. Read lines from file
   while (getline(in1, line))  
   {
      // 4. process each line
      int i = 0;
      while(!isdigit(line[i])) // find the index where the number begins
      {
         i++;
      }

      int j = i -1;
      while(isspace(line[j])) // find index where our string ends
      {
         j--;
      }
      string country_name = line.substr(0, j+1);
      string population = line.substr(i);

      total+=stoi(population);
   }
   // 5. Write things to the output file (if necessary)
   out1 << total;
   // 6. close files
   in1.close();
   out1.close();
   return 0;
}
