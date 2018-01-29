/*File: Lab 04.cpp
 *----------------------------------
 * Name:    Syed Nasif Ali (201304650)
 * Username: x2013ijn
 * Course:   CSCI 161
 * Purpose:  Lab #4
 * Date: 2015/10/08
 * This program is to help customers in a departmental store which inputs the prices of each items purchased by the customers and shows the total amount.
   Then it asks the amount they want to pay and shows the amount of change they will receive from the cashier.
   */


#include <iostream>
#include <iomanip>

using namespace std;

int main()

{    int dollars, quarters, cents;
    double value, sum, total, amount, change, shot;

    cout << setprecision (2) << fixed;
    cout << " Please enter the prices of your items one by one. Enter 0 when you are done. \n";

    sum = 0;


    cin >> value;


     while (value > 0)
    {

    sum = sum + value;
    cin >> value;

    }
    total = (sum * .15) + sum;


    cout << " Your total bill is " << total << " after including HST \n";
    cout << " Please enter the amount you paid \n";
    cin >> amount;

    if (amount < total)
    {
      shot = (total - amount);

      cout << " Sorry !, you are $ " << shot << " short from your total \n";

    }

   if (amount == total)
   {
      cout << " You have no change to receive. Thank you for shopping in Walmart. Please visit us again. \n";
   }

   if (amount > total)
   {
       change = (amount - total);

       dollars = change;

       cents = (change - dollars) * 100;

       quarters = cents / 25;
       cents = cents % 25;

       cout << " You have $ " << dollars << " and " << quarters << " quarters and " << cents << " cents change to receive \n";
       cout << " Thank you for shopping with Walmart. Please come back again. \n";
       cout << " Happy Halloween !!! \n";
   }






    return 0;
}
