#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

/*
This is an example program to demonstrate commands to format console output
This program computes calories burned by a dog.
*/
int main()
{
    double dog_weight, cat_weight = 0;
    const double DOG_CAL_RATE = 1.75;
    const double CAT_CAL_RATE = 0.85;

    cout << "Welcome to the Petsitter's Club!" << endl;

    cout << "Enter the weight of the dog in KG: ";
    cin >> dog_weight;

    cout << "Enter the weight of the cat in KG: ";
    cin >> cat_weight;

    double dog_calories_burned = pow(dog_weight, DOG_CAL_RATE);
    double cat_calories_burned = pow(cat_weight, CAT_CAL_RATE);

    cout << fixed << setprecision(2);
    cout << "The dog is " << dog_weight << "kg.";
    cout << setw(20);
    cout << fixed << setprecision(8);
    cout << "It burned " << setw(20) << dog_calories_burned << " calories" << endl;

    cout << fixed << setprecision(2);
    cout << "The cat is " << cat_weight << "kg.";
    cout << setw(20);
    cout << fixed << setprecision(8);
    cout << "It burned " << setw(20) << cat_calories_burned << " calories" << endl;

    return 0;
}