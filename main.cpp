// File: Lab 05.cpp
// Name: Syed Nasif Ali Shah (201304650)
// Username: x201304650
// Course: CSCI 161
// Purpose: Lab 5
// Date: 2015/10/16
// This program tells the user are they driving at the safe speed. If they are not how much will they be fined.

#include <iostream>

using namespace std;

int main()
{
    int limit, AreaZone;
    double velocity, LimitCross, fine;

    cout << " Please enter the speed limit. \n";
    cin >> limit;
    cout << " Please enter the speed of your vehicle. \n";
    cin >> velocity;

    LimitCross = velocity - limit;

    if ( LimitCross < 0)
    {
        LimitCross = -1 * LimitCross;

        cout << " You are "
             << LimitCross
             << " km/hr below the speed limit and safe to go with it."
             << " Don't forget to apply black pepper on your turkey \n";
        return 0;
    }

    if ( 1 <= LimitCross && LimitCross <= 15)
    {
        fine = 227.41;
    }

    if ( 16 <= LimitCross && LimitCross <= 30 )
    {
        fine = 284.91;
    }

    if ( 31 <= LimitCross && LimitCross <= 50)
    {
        fine = 399.91; // what would happen if the speed is 50.5 km/hr?
    }

    if (LimitCross >= 51)
    {
        fine = 2421.41;
    }

   cout << " You have crossed your limit by "
        << LimitCross
        << " km/hr If you are driving at a regular zone \n"
        << "then your fine is $"
        << fine
        << " \n";

   cout << " If you are driving at a school or a construction zone"
        << " then press 2"
        << " if you are \n"
        << " at both then press 4"
        << " if you are not at any one of them then press 0 or any key  "
        << " to continue \n";

    cin >> AreaZone;

    if ( AreaZone == 2)
    {
        fine = 2 * fine;

        cout << " Sorry but your fine is now $"
             << fine
             << " Please lower your speed by "
             << LimitCross
             << " km/hr to save \n"
             << " yourself for the turkey \n";

    }
    else if ( AreaZone == 4)
    {
        fine = 4 * fine;

        cout << " Sorry buddy its ain't your day"
             << " You are gonna fined by $"
             << fine
             << " If you want to\n"
             << " cheer your turkey"
             << " then lower you speed by "
             <<  LimitCross
             << " km/hr \n";
    }

    else
    {
        cout << " Lower your speed and drive safe,"
             << " And don't forget to apply black pepper"
             << " on your turkey \n";
    }



    return 0;
}
