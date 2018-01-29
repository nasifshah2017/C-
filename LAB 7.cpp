
   /* Filename: lab7.cpp
 * ------------------
 * Author: Syed Nasif Ali
 * Userid: x2013ijn
 * Course: CSCI 161
 * Date:   October 29-30, 2015
 *
 * Purpose:  This program calculates the gross pay for employees.
 *           It allows the user to enter employee numbers, hours worked,
 *           and rates of pay, and calculates the gross pay for each employee.
 *           User input terminates when employee number entered is 0.
 *           The program then displays the sum totals of the both the
 *           hours worked and gross pays for all employees.
 */

#include <iostream>
#include <iomanip>

using namespace std;

/* Function Prototype */

double GrossPay (double hours, double rate);

/* Main Program */

int main()
{
    int empNum, counter;
    double hours, rate, grosspay, TotalHours, totalGrossPay;

    cout << setprecision(2) << fixed;

    cout << "Please enter the employee number (0 to stop): ";
    cin  >> empNum;

    totalGrossPay = 0.0;
    TotalHours = 0.0;

    while (empNum != 0)
    {
        cout << "Hours: ";
        cin  >> hours;
        cout << "Rate: ";
        cin  >> rate;

        grosspay = GrossPay(hours, rate);
        totalGrossPay += grosspay;
        TotalHours += hours;

        cout << "\nGross Pay is " << grosspay;

        cout << "\n\nPlease enter the employee number (0 to stop): ";
        cin  >> empNum;
    }

    cout << "\nThe total hours worked by all employees is " << TotalHours <<  "\n";
    cout << "\nThe total gross pay earned by employees is " << totalGrossPay << "\n";
    return 0;
}

/* Function: GrossPay
 * Usage: grosspay = GrossPay(hours, rate);
 * ----------------------------------------
 * This function calculates the gross pay for an employee for the
 * given number of hours worked (hours) and the rate of pay (rate).
 *
 * An employee is paid at the regular rate for the first 40 hours worked,
 * at 1.5 times the rate for any hours over the first 40, and
 * at 2.0 times the rate for any hours over the first 60.
 *
 *    e.g.  62 hours at $10 per hour,
 *          gives $400 for the first 40 hours @ $10 per hour,
 *                $300 for the next  20 hours @ $15 per hour, and
 *                $ 40 for the final  2 hours @ $20 per hour,
 *                ----               --
 *          thus  $740 for the total 62 hours.

 */

 double GrossPay (double hours, double rate)
 {

 if (hours <= 40)
 {
     return rate * hours;
 }

else if (hours <= 60)
{
    return (40 * rate) + ((hours - 40)*(1.5 * rate));
}

else
{
    return ((40 * rate) + 20*(1.5 * rate)+ (hours - 60)*(2*rate));
}


 }


