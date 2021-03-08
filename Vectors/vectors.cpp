#include <iostream>
#include <vector>

using namespace std;


int main()
{  
   vector<double> vec; // size is 0
   cout << vec.size() << endl; // 0
   vec.push_back(3);
   cout << vec.size() << endl; // 1
   cout << vec.front() << endl; // 3
   cout << vec.back() << endl; // 3
   
   vec.at(0) = vec[0] - 1;
   cout << vec.front() << endl; // 2
   cout << vec.back() << endl; // 2
   
   vector<double> vec2; // size is 0
   vec2 = vec; //copying a vector into another vector
   cout << vec.size() << endl; // 1
   cout << vec.front() << endl; // 2
   cout << vec.back() << endl; // 2
   
   if (vec2 == vec)
   {
      cout << "They are equal" << endl;
   }
   
   vector<double> vec3; // size is 0
   vec3.push_back(2);
   if (vec2 == vec3)
   {
      cout << "They are equal" << endl;
   }
   return 0;
}