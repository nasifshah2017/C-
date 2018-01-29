#include <iostream>
#include <iomanip>
#include <ctime>
#include <windows.h>

using namespace std;




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

        Day = (seconds/86400);
        Hour = (((int)seconds/3600)%24);
        Minute = (((int)seconds/60)%60);
        Second = ((int)seconds%60);

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
