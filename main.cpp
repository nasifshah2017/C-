// File: LAB 06.cpp
// Name: Syed Nasif Ali (201304650)
// Username: x2013ijn
// Course: CSCI 161
// Purpose: Lab 6
// Date: 2015/10/22
// Purpose: This program uses the value of a variable to give
// the output depending on the expression





#include <iostream>
#include <iomanip>


using namespace std;

double f (double x);
double g (double x);


int main()
{
    double x;

    cout << setw(5) << "x";
    cout << setw(10) << "f(x)";
    cout << setw(10) << "g(x)";
    cout << setw(10) << "f(g(x))";
    cout << setw(12) << "g(f(x))\n";
    cout << "-------------------------------------------------- \n";

    for (x = -5; x <= 5; x = x + .5)
    {
        cout << setw(5) << setprecision (1) << fixed << x;
        cout << setw(10) << f(x);
        cout << setw(10) << g(x);
        cout << setw(10) << f(g(x));
        cout << setw(10) << g(f(x));
        cout << " \n";


    }




    return 0;
}

// Function : f
// Argument : x
// Purpose  : The function uses the statements
// in the if and else loop and uses it to produce
// the output using the range of x

double f (double x)
{
    if ( x < 0)
    {
        return x * x - ( 2 * x );
    }
    else if ( x > 0)
    {
       return (x * ( x + 1))/2;
    }

    else
    {
        return 0;
    }
}
// Function : g
// Argument : x
// Purpose : The function uses the statement
// in the g function loop to produce values
// on the range of x from -5 to +5


double g (double x)
{
    return 2.5 * x - 3;
}


