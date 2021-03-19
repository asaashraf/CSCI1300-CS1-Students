#include <iostream>
#include <string>
#include "jedi.h"

using namespace std;

int main() 
{

    // testing the parameterized constructor
    Jedi vader("Darth Vader", 10, 13);
    // "testing" the display MF
    vader.display();


    // testing the default constructor
    Jedi luke;
    // testing the set_name() member function (MF)
    luke.set_name("Luke");
    luke.display();
    // testing the train MF
    luke.train();
    luke.display();
    // testing the rest MF
    luke.rest();
    luke.display();
    // testing the get_health() MF
    cout << luke.get_health() << endl; // should be 1
    // testing the get_power() MF
    cout << luke.get_power() << endl; // should be 1
    // testing the get_name() MF
    cout << luke.get_name() << endl; // should be "Luke"


    return 0;
}
