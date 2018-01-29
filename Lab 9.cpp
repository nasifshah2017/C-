// File: Lab 09.cpp
// Name: Syed Nasif Ali Shah (201304650)
// Username: x201304650
// Course: CSCI 161
// Purpose: Lab 9
// Date: 2015/10/16
// This program Approximates PI and Expands a series to get as close as possible to PI by
// using different functions.




#include <iostream>
#include <cmath>
#include <iomanip>


using namespace std;

double Approximation ();
double Expansion ();

int main()
{
    double PI, symbol, value;

    value = 3.0;
    symbol = 2.0;

    PI = Approximation ();

    cout << setprecision(20) << fixed << "\n";

    cout << "Successive Approximation PI = " << PI << "\n\n\n";

    //cout << " \n New Function \n\n";

    PI =  6 * (Expansion ());

    cout << " \n\nSeries Expansion PI = " << PI << setw(16) << fixed << "\n";

    cout << "\n\nMath Library PI = " << M_PI << setw(16) << fixed << "\n\n";

    return 0;
}

// Function: Approximation
// Usage: PI = Approximation ()
// -------------------------------------
// This function approximates the value of PI
// by running a function using the above
// Trigonometric Equation. It keeps on adding
// the value each time it comes up with starting
// from zero to the decimal value of PI.

double Approximation ()
{
    double guess, x;
    x = 0.0;
    guess = 3.0;



   while (guess != x)
    {
        x = guess;
        guess = x + ((1 + cos(x))/sin (x));

        cout << guess << setw(16) << fixed << "\n";
    }






        return guess;
}

// Function: Series Expansion
// Usage: arcsin()
// -------------------------------------
// This function approximates the value of PI
// by expanding a series using a function. The
// function in each time inputs values starting
// from zero till it gets close to the value of PI.


double Expansion()

{
    double oddProd, evenProd, pow2, term, sum, OddNum;

    sum = 0;
    term = .5;
    pow2 = 2;
    oddProd = 1;
    evenProd = 1;
    OddNum = 1;

    //n = 2;

    while (sum != sum + term)
    {
        sum += term;

        oddProd *= OddNum;

        evenProd *= (OddNum + 1);

        OddNum += 2;

         pow2 *= 4;

        term = ((oddProd)/((evenProd) * (OddNum) * (pow2)));

    cout << sum << "\n";
    }

    return sum;
}
