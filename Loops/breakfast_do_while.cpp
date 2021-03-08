#include <iostream>
using namespace std;

int main()
{
    // Example: Buying breakfast

    char option;
    do
    {
        cout << "What would you like to buy today?"  << endl;
        cout << "a: Appple" << endl;
        cout << "b: Bagel" << endl;
        cout << "c: Cinnamon roll" << endl;
        cout << "d: Doughnut" << endl;
        cout << "q: Quit" << endl;
        cin >> option;
        switch(option)
        {   
                case 'A':
                case 'a': 
                        cout << "You bought an apple" << endl;
                        break; 
                case 'B':
                case 'b': 
                        cout << "You bought a Bagel" << endl;
                        break;
                case 'c':
                case 'C': 
                        cout << "You bought a Cinnamon roll" << endl;
                        break;
                case 'D':
                case 'd': 
                        cout << "You bought a doughnut" << endl;
                        break;
                case 'Q':
                case 'q': 
                        cout << "Goodbye! Have a nice day!!" << endl;
                        break;
                default: 
                        cout << "Sorry! We don't have that item in our menu" << endl;
                        break;
        }
    }while(option != 'q');
    return 0;
}
