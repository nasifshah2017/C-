// File: LAB 06.cpp
// Name: Syed Nasif Ali (201304650)
// Username: x2013ijn
// Course: CSCI 161
// Purpose: Assignment 3
// Date: 2015/10/22
// Purpose: This is a calendar program which outputs the the whole year calendar
//          that the user wants to view, it can also shows a specific month from a
//          year, and highlights a specific date from that month.




#include <iostream>
#include <iomanip>

using namespace std;

void showDay ();
void showDate31();
void showDate30();
void showFeb();
void showLeapFeb();
int FirstDay (int);
bool LeapYear(int);




int main()
{
    int year, FirstDayYear;

    cout << " Please enter the year you want to view \n";
    cin >> year;

    FirstDay(year);

    LeapYear(year);



    cout << " January " << year << "\n";
        showDay();
        cout << "\n";
        showDate31();
        cout << "\n";

    cout << " February " << year << "\n";
    showDay();
     cout << "\n";
    if (LeapYear)
    {
        showLeapFeb();
        cout << "\n";
    }
    else
    {
        showFeb();
        cout << "\n";
    }

    cout << " March " << year << "\n";
    showDay();
    cout << "\n";
    showDate31();
    cout << "\n";

    cout << " April " << year << "\n";
    showDay();
    cout << "\n";
    showDate30();
    cout << "\n";

    cout << " May " << year << "\n";
    showDay();
    cout << "\n";
    showDate31();
     cout << "\n";

    cout << " June " << year << "\n";
    showDay();
    cout << "\n";
    showDate30();
    cout << "\n";

    cout << " July " << year << "\n";
    showDay();
    cout << "\n";
    showDate31();
    cout << "\n";

    cout << " August " << year << "\n";
    showDay();
    cout << "\n";
    showDate31();
    cout << "\n";

    cout << " September " << year << "\n";
    showDay();
    cout << "\n";
    showDate30();
    cout << "\n";

    cout << " October " << year << "\n";
    showDay();
    cout << "\n";
    showDate31();
    cout << "\n";

    cout << " November " << year << "\n";
    showDay();
    cout << "\n";
    showDate30();
    cout << "\n";

    cout << " December " << year << "\n";
    showDay();
    cout << "\n";
    showDate31();
    cout << "\n";





return 0;
}

void showDay()
{
     cout << "\n";
     cout << "Sun     Mon      Tues       Wed        Thurs     Fri      Sat \n";
}

void showDate31()
{
    int date, line;

    date = 1;


    for (date = 1; date <= 31; date++)
    {
      if (date > 7)
        { line = date % 7;

        }

        if (line == 0)
        {
            cout << "\n";
        }





        cout << date << setw(10);
    }
    cout << "\n";
}

void showDate30()
{
    int date = 1, line;



    for (date = 1; date <= 30; date++)
    { if (date > 7)
        {line = date % 7;

        }
        if (line == 0)
        {
            cout << "\n";
        }



        cout << date << setw(10);
    }

    cout << "\n";
}

void showFeb()
{
    int date = 1, line;



  for (date = 1; date < 28; date++)
    { if (date > 7)
    {line = date % 7;

    }
        if (line == 0)
        {
            cout << "\n";
        }


        cout << date << setw(10);
    }
    cout << "\n";
}

void showLeapFeb()
{
    int date = 1, line;



    for (date = 1; date < 29; date++)
    { if (date > 7)
    {line = date % 7;

    }
        if  (line == 0)
        {
            cout << "\n";
        }


        cout << date << setw(10);
    }
    cout << "\n";
}

int FirstDay(int yearly)
{
    int PrevLastDay, FirstDay;

   PrevLastDay = ((yearly*365)+(yearly/4)-(yearly/100)+(yearly/400)%(7));

   if (PrevLastDay >= 0 && 6 < PrevLastDay)
    {
        FirstDay = 1 + PrevLastDay;
    }
    else if (PrevLastDay == 6)
    {
        FirstDay = 0;
    }
    else
    {
        cout << " Disaster \n";
        return 0;
    }


}

bool LeapYear(int yearly)
{

    if (((yearly % 4 == 0) && (yearly % 100 != 0)) || (yearly % 400 == 0))
    {
        return true;
    }

    else
    {
        return false;
    }
}

