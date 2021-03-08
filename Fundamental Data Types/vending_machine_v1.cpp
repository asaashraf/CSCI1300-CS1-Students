#include <iostream>
/* 
Algorithm:
input:  money to buy stamps, number of stamps
output: change in dollars and cents

1. Ask user to input a whole number for the dollar amount inserted into the machine
    a. Save in the variable initial_money
2. Ask user to input a whole number for the number of stamps wished to purchase
    a. Save in the variable num_stamps
3. Compute total purchase price
    a. purchase_price_cents = num_stamps * 55
4. Compute change needed
    a. change_cents = initial_money * 100 - purchase_price_cents
    b. change_dollars = change_cents / 100 
    c. change_pennies = change_cents % 100 (remainder)
5. Display change in dollars and pennies to user
*/
using namespace std;

int main(){
    int initial_money = 0;
    int num_stamps = 0;
    int purchase_price_cents = 0;
    int change_cents, change_dollars, change_pennies = 0;

    cin >> initial_money;
    
    purchase_price_cents = num_stamps * 55;
    change_cents = initial_money * 100 - purchase_price_cents; // computing change_cents
    change_dollars = change_cents / 100;
    change_pennies = change_cents % 100;

    cout << "Change in dollars: " << change_dollars << endl;
    cout << "Change in pennies: " << change_pennies << endl;

    return 0;
}