// Filename: Assignment 4.cpp
// -----------------------
// Author:  Syed Nasif Ali
// Course:  CSci 161
// Date:    4 December 2015
// Purpose: It works as a countdown timer from the current time till the
// event date set by the user. But it outputs the timer with a special
// design and in larger font than regular timers.



#include <iostream>
#include <iomanip>
#include <ctime>
#include <windows.h>

using namespace std;

void top(int);
void upper(int);
void middle(int);
void bottom(int);
void printDigits(int,int,int,int);


int main()
{
    time_t now;
    tm     current, event;
    int InputDay, InputHour, InputMinute, InputSecond, InputYear, InputMonth;
    int Hour, Minute, Second;
    double seconds, Day;

    cout << " Please enter the year of the event. (Above 1900) \n";
    cin  >> InputYear;
    cout << "Please enter the month of the event. \n";
    cin  >> InputMonth;
    cout << " Please enter the day of the event. \n";
    cin  >> InputDay;
    cout << "Please enter the hour of the event for 24hrs clock \n";
    cin  >> InputHour;
    cout << " Please enter the minute of the event \n";
    cin  >> InputMinute;
    cout << " Please enter the second of the event \n";
    cin  >> InputSecond;

    /* Set the time for X-Ring ceremony Dec 3, 2015 at 2 pm
       hour - 24 hour clock    mon - from 0 to 11   year - counts from 1900 */

    event.tm_hour = InputHour +1; event.tm_min = InputMinute; event.tm_sec = InputSecond;
    event.tm_mday = InputDay;  event.tm_mon = InputMonth -1; event.tm_year = InputYear - 1900;

    while (true)                                 // infinite loop
    {
        now = time(NULL);                        // get current time

        current = *localtime(&now);              // convert to usable form

        seconds = difftime(mktime(&event), now); // seconds until x-ring

        cout << "\nCOUNTDOWN TO WORLD CUP\n\n\n";

        cout << setfill('0') << fixed << setprecision(0);

        cout << setw(2) << current.tm_hour << ':'
             << setw(2) << current.tm_min  << ':'
             << setw(2) << current.tm_sec  << ' '
             << setw(2) << current.tm_mday << '/'
             << setw(2) << current.tm_mon + 1 << '/'
             << setw(4) << 1900 + current.tm_year << "  CURRENT TIME" << endl;

        cout << "\n\n" << setw(19) << seconds << "  seconds\n\n\n";

        Day = ((int)seconds/86400);
        Hour = (((int)seconds/3600)%24);
        Minute = (((int)seconds/60)%60);
        Second = ((int)seconds%60);

        printDigits(Day, Hour, Minute, Second);

        cout << "\n";

        cout << (int)Day << " days  "
             << Hour <<  ":"
             << Minute <<  ":"
             << Second << "\n\n";

        cout << setw(2) << event.tm_hour << ':'
             << setw(2) << event.tm_min  << ':'
             << setw(2) << event.tm_sec  << ' '
             << setw(2) << event.tm_mday << '/'
             << setw(2) << event.tm_mon + 1 << '/'
             << setw(4) << 1900 + event.tm_year << "  EVENT" << endl << endl;

        Sleep(1000);
        system("cls");
    }

    return 0;
}

/* Function: Design
 * Usage:   Calling Designs;
 * -----------------------------
 * This function calls the designs to their corresponding
 * positions depending on their digits
 */

void printDigits(int day, int hour, int minute, int second)
 {


    if(day/100 != 0)
    {
        top(day/100);
        cout << "  ";
    }
    day = day%100;
    top(day/10);
    cout << " ";
    top(day%10);
    cout << "     ";


    top(hour/10);
    cout << " ";
    top(hour%10);
    cout <<"   ";

    top(minute/10);
    cout << " ";
    top(minute%10);
    cout << "   ";

    top(second/10);
    cout << " ";
    top(second%10);
    cout << "\n";

    //upper

    if(day/100 != 0)
    {
        upper(day/100);
        cout << "  ";
    }
    day = day%100;
    upper(day/10);
    cout << " ";
    upper(day%10);
    cout << "     ";

    upper(hour/10);
    cout << " ";
    upper(hour%10);
    cout << "   ";

    upper(minute/10);
    cout << " ";
    upper(minute%10);
    cout << "   ";

    upper(second/10);
    cout << " ";
    upper(second%10);
    cout << "\n";

    //middle

    if(day/100 != 0)
    {
        middle(day/100);
        cout << "  ";
    }
    day = day%100;
    middle(day/10);
    cout << " ";
    middle(day%10);
    cout << "     ";

    middle(hour/10);
    cout << " ";
    middle(hour%10);
    cout << "   ";

    middle(minute/10);
    cout << " ";
    middle(minute%10);
    cout << "   ";

    middle(second/10);
    cout << " ";
    middle(second%10);
    cout << "\n";

    //bottom

    if(day/100 != 0)
    {
        bottom(day/100);
        cout << "  ";
    }
    day = day%100;
    bottom(day/10);
    cout << " ";
    bottom(day%10);
    cout << "     ";

    bottom(hour/10);
    cout << " ";
    bottom(hour%10);
    cout << "   ";

    bottom(minute/10);
    cout << " ";
    bottom(minute%10);
    cout << "   ";

    bottom(second/10);
    cout << " ";
    bottom(second%10);
    cout << "\n";
 }

/*
 * This function displays the top portion of the numbers.
 */

void top (int digit)
{
    switch (digit)
    {
        case 0: case 2: case 3: case 5: case 6: case 7: case 8: case 9:
            cout << " __ "; break;
        default:
            cout << "    "; break;
    }
}

/*
 * This function displays the upper portion of the numbers.
 */

void upper (int digit)
{
    switch (digit)
    {

        case 0:  case 4: case 8: case 9:
            cout << "|  |"; break;
        case 1: case 2: case 3: case 7:
            cout << "   |"; break;
        default:
            cout << "|   "; break;
    }
}

/*
 * This function displays the middle portion of the numbers.
 */

void middle (int digit)
{
    switch (digit)
    {
        case 0:
            cout << "|  |"; break;
        case 8:
            cout << "|--|"; break;
        case 1: case 7:
            cout << "   |"; break;
        case 2: case 5:
            cout << " -- "; break;
        case 3: case 4:
            cout << " --|"; break;
        case 6:
            cout << "|-- "; break;
        default:
            cout << " --|"; break;
    }
}

/*
 * This function displays the bottoms of the numbers.
 */

void bottom (int digit)
{
    switch (digit)
    {
        case 0: case 8: case 6:
            cout << "|__|"; break;
        case 1: case 4: case 7:
            cout << "   |"; break;
        case 3: case 5: case 9:
            cout << " __|"; break;
        default:
            cout << "|__ "; break;
    }
}
