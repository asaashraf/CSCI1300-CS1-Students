#include <iostream>
#include <string>
#include "jedi.h"

using namespace std;

int mostPowerfulest(Jedi array[], int size) 
{
    int idx_max = -1;
    int max_power = 0; // array[0].get_power()
    int jedi_power =0;
    for (int k=0; k<size; k++) 
    {
        jedi_power = array[k].get_power();
        if (jedi_power > max_power) 
        {
            idx_max = k;
            max_power = jedi_power;
        }
    }
    return idx_max;
}

Jedi duel(Jedi combatant1, Jedi combatant2) 
{
    // winner is whoever is more powerful
    if (combatant1.get_power() > combatant2.get_power()) 
    {
        return combatant1;
    } 
    else if (combatant1.get_power() < combatant2.get_power()) 
    {
        return combatant2;
    } 
    else 
    {
        // return a "null" Jedi if no clear winner
        Jedi mace;
        mace.set_name("Mace");
        return mace;
    }
}

int main() 
{
    const int COUNCIL_CAP = 5;  // constant variable for size of council array
    // COUNCIL_CAP = 4;
    Jedi council[COUNCIL_CAP];        // create an array of 5 Jedis; array definition
    council[0] = Jedi("Obi-wan", 10, 15);  // name, health power; council[0]
    council[1] = Jedi("Yoda", 8, 19);
    council[2] = Jedi();// default constructor; council[2]

    // can be modified outside the array
    Jedi luke;


    for (int k=0; k < COUNCIL_CAP; k++) 
    {
        council[k].display();
    }

    int idx = mostPowerfulest(council, 2);
    cout << "Most powerful is at index " << idx << ":" << endl;
    council[idx].display();

    Jedi winner = duel(council[0], council[1]);
    // Jedi winner1 = duel(luke, council[0]);
    // winner1 = luke; // same class
    int a, b=0;
    a = b;
    cout << "Winner is: " << winner.get_name() << endl;

    return 0;
}
