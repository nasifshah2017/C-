#include <iostream>
#include <iomanip>

using namespace std;

int FirstDayOfYear (int);
bool (LeapYear);
int NumberOfDaysInMonth (int month, int year);
int DayInWeek (int year);
void showMonth (int currentMonth);
void showDays (int DaysInMonth, int week);


int main()
{
    int year, months, day, date, FirstDay, row, column, currentMonth, showMonth, showDays;




    cout << " Please enter the year of your calendar.\n";
    cin >> year;

    FirstDay = FirstDayOfYear(year);

    cout << " Please enter the year."
         << year
         << "\n";

        currentMonth = 1;

    while (currentMonth <= 12)
    {
        day = NumberOfDaysInMonth (currentMonth, year);
        showMonth (currentMonth);
        showDays (day, FirstDay);
        cout << "\n";
             << "\n";
        currentMonth = currentMonth + 1;
    }
    return 0;
}


int FirstDayOfYear(int year)
int StartingDay;

StartingDay = (((year - 1)*365)+((year - 1)/4)+(year - 1 / 100) +((year - 1 / 400)+1)) % 7;

return StartingDay;

int NumberOfDaysInMonth(int month, int year)
{
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        return 31;
        break;

    case 4:
    case 6:
    case 9:
    case 11:
        return 30:
            break;

    default:
        if (LeapYear (year))
        {


            return 29;
        }
        else
        {
             return 28;
        }


    }
}

bool LeapYear (int year)
{
    return ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0));
}

void showMonth (int months)
{


    if (months == 1)
    {
        cout << " January                "
             << year  << "\n";
    }
    else if (months == 2)
    {
        cout << " February               "
             << year << "\n";
    }
    else if (month == 3)
    {
        cout << " March                  "
             << year << "\n";
    }
    else if (months == 4)
    {
        cout << " April                  "
             << year << "\n";
    }
    else if (months == 5)
    {
        cout << " May                    "
             << year << "\n";
    }
    else if (months == 6)
    {
        cout << " June                   "
             << year << "\n";
    }
    else if (months == 7)
    {
         cout << " July                  "
              << year << "\n";
    }
    else if (month == 8)
    {
        cout << " August                 "
             << year << "\n";
    }
    else if (month == 9)
    {
        cout << " September              "
             << year << "\n";
    }
    else if (month == 10)
    {
        cout << " October                "
             << year << "\n";
    }
    else if (month == 11)
    {
        cout << " November               "
             << year << "\n";
    }
    else if (month == 12)
    {
        cout << " December               "
             << year << "\n";
    }
    else
    {
        cout << " Nice try, but I am not going "
             << " to give an output for that \n";
    }

    //FirstDay = day + 1; // First day of the year





    cout << " Sun  Mon  Tues  Wed  Thurs  Fri  Sat \n";

}

   // for (column = 1; column <= 7; column++)
    //{
        // cout << " \n";

        void showDays(int DaysInMonth, int week)
        {
            int days;
            days = 1;
            week = 0;
            while ( days <= DaysInMonth)
            {
                cout << setw (3)
                     << days
                     << " ";

              if ( week == 6)
              {
                   cout << "\n";
                   week = 0;
              }
              else
              {
                  week = week + 1;
                  days = days + 1;
              }
            }
        }


