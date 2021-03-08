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
        cout << "c: Coffee" << endl;
        cout << "q: Quit" << endl;
        cin >> option;
        switch(option)
        {   
                case 'a': 
                {
                        char apple;
                        // show another menu listing different apple types
                        do
                        {
                                cout << "a: gala apple" << endl;
                                cout << "b: honeycrisp" << endl;
                                cout << "c: granny smith" << endl;
                                cout << "d: fuji" << endl;
                                cout << "q: Quit" << endl;
                                cin >> apple;
                                switch(apple)
                                {
                                        case 'a': cout << "you bought a gala apple" << endl;break;
                                        case 'b': cout << "you bought a honey crisp apple" << endl;break;
                                        case 'c': cout << "you bought a granny smith apple" << endl;break;
                                        case 'd': cout << "you bought a fuji apple" << endl;break;
                                }
                        }while(apple!='q');
                        break; 
                }     
                case 'b': 
                        {
                        char bagel;
                        // show another menu listing different apple types
                        do
                        {
                                cout << "a: cream cheese" << endl;
                                cout << "b: hazelnut" << endl;
                                cout << "q: Quit" << endl;
                                cin >> bagel;
                                switch(bagel)
                                {
                                        case 'a': cout << "you bought a cream cheese bagel" << endl;break;
                                        case 'b': cout << "you bought a hazelnut bagel" << endl;break;
                                }
                        }while(bagel!='q');
                        break; 
                }
                case 'c':
                        {
                        char coffee;
                        // show another menu listing different apple types
                        do
                        {
                                cout << "a: Americano" << endl;
                                cout << "b: Latte" << endl;
                                cout << "c: Capuccino" << endl;
                                cout << "d: Espresso" << endl;
                                cout << "q: Quit" << endl;
                                cin >> coffee;
                                switch(coffee)
                                {
                                        case 'a': cout << "you bought an americano" << endl;break;
                                        case 'b': cout << "you bought a latte" << endl;break;
                                        case 'c': cout << "you bought a Capuccino" << endl;break;
                                        case 'd': cout << "you bought an espresso" << endl;break;
                                }
                        }while(coffee!='q');
                        break; 
                }
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