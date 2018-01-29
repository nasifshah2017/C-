/* File: Assignment4.cpp
 * -----------------------
 * Name:     Brandon Mclellan and Ryan Dunfield
 * Username: x2013gvf & x2015jus
 * Course:   CSCI 161
 * Date:     28 November 2015
 * Purpose:
 *
 */
#include <iomanip>
#include <ctime>
#include <windows.h>
#include <iostream>
#include <cmath>

using namespace std;

    void top (int digit);
    void upper (int digit);
    void middle (int digit);
    void bottom (int digit);


int main ()
{

    time_t now;
    tm     current, xring;
    double seconds;

    /* Set the time for X-Ring ceremony Dec 3, 2015 at 2 pm
       hour - 24 hour clock    mon - from 0 to 11   year - counts from 1900 */

    xring.tm_hour = 14; xring.tm_min = 0; xring.tm_sec = 0;
    xring.tm_mday = 3;  xring.tm_mon = 11; xring.tm_year = 115;

    while (true)                                 // infinite loop
    {
        now = time(NULL);                        // get current time

        current = *localtime(&now);              // convert to usable form

        seconds = difftime(mktime(&xring), now); // seconds until x-ring

        cout << "\nCOUNTDOWN TO X-RING\n\n\n";

        cout << setfill('0') << fixed << setprecision(0);

        cout << setw(2) << current.tm_hour << ':'
             << setw(2) << current.tm_min  << ':'
             << setw(2) << current.tm_sec  << ' '
             << setw(2) << current.tm_mday << '/'
             << setw(2) << current.tm_mon + 1 << '/'
             << setw(4) << 1900 + current.tm_year << "  CURRENT TIME" << endl;

        cout << "\n\n" << setw(19) << seconds << "  seconds\n\n\n";

        cout << setw(2) << xring.tm_hour << ':'
             << setw(2) << xring.tm_min  << ':'
             << setw(2) << xring.tm_sec  << ' '
             << setw(2) << xring.tm_mday << '/'
             << setw(2) << xring.tm_mon + 1 << '/'
             << setw(4) << 1900 + xring.tm_year << "  X-RING" << endl << endl;

        Sleep(1000);
        system("cls");

        return 0;
    }
}

/*
 * This function is used to display the tops of the numbers.
 */

void top (int digit)
{
    switch (digit)
    {
        case 0: case 2: case 3: case 5: case 6: case 7: case 8: case 9:
            cout << " __  "; break;
        default:
            cout << "     "; break;
    }
}
/*
 * This function is used to display the upper portion of the numbers.
 */

void upper (int digit)
{
    switch (digit)
    {

        case 0:  case 4: case 8: case 9:
            cout << "|  | "; break;
        case 1: case 2: case 3: case 7:
            cout << "   | "; break;
        default:
            cout << "|    "; break;
    }
}

/*
 * This function is used to display the middle portion of the numbers.
 */

void middle (int digit)
{
    switch (digit)
    {
        case 0:
            cout << "|  | "; break;




        case 8:
            cout << "|--| "; break;
        case 1: case 7:
            cout << "   | "; break;
        case 2: case 5:
            cout << " --  "; break;
        case 3: case 4:
            cout << " --| "; break;
        case 6:
            cout << "|--  "; break;
        default:
            cout << " --| "; break;
    }
}

/*
 * This function is used to display the bottoms of the numbers.
 */

void bottom (int digit)
{
    switch (digit)
    {
        case 0: case 8: case 6:
            cout << "|__| "; break;
        case 1: case 4: case 7:
            cout << "   | "; break;
        case 3: case 5: case 9:
            cout << " __| "; break;
        default:
            cout << "|__  "; break;
    }
}
