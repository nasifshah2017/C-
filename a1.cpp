/* File: a1.cpp
 * -----------------------------
 * Name:     your name here
 * Course:   CSCI 161
 * Date:     28 September 2015
 * Purpose:  Assignment # 1
 *
 * This program accepts a credit card balance and an annual interest rate.
 * It computes and outputs the length of time and the amount required
 * to pay off the card if payments of $100 are made each month.
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int months, years;

    double balance, rate, interest, amount;

    cout << "What is the credit card balance? ";
    cin  >> balance;

    cout << "What is the annual interest rate? ";
    cin  >> rate;

    rate = rate / 1200.0;

    cout << setprecision(2) << fixed;

    months = 0;
    amount = balance;

    while (balance > 0)
    {
        interest = 10 + (.02 * balance);
        balance  = balance + interest - 100.00;

        amount   = amount + interest;
        months = months + 1;
    }

    years = months / 12;
    months = months % 12;

    cout << "It took " << years << " years and "
                       << months << " months.\n\n"
         << "Total paid was $" << amount << endl;

    return 0;
}
