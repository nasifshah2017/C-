#include <iostream>
#include <iomanip>

using namespace std;

void showDay (int);
void showDate31();
void showDate30();
void showFeb();
void showLeapFeb();




int main()
{
    int year, PrevLastDay, FirstDayYear, LeapYear;

    cout << " Please enter the year you want to view \n";
    cin >> year;

    PrevLastDay = ((year*365)+(year/4)-(year/100)+(year/400)%(7));

    LeapYear = (year%4);

    if (PrevLastDay >= 0 && 6 < PrevLastDay)
    {
        FirstDayYear = 1 + PrevLastDay;
    }
    else if (PrevLastDay == 6)
    {
        FirstDayYear = 0;
    }
    else
    {
        cout << " Disaster \n";
        return 0;
    }

    cout << " January " << year << "\n";
        showDay(FirstDayYear);
        cout << "\n";
        showDate31();
        cout << "\n";

    cout << " February " << year << "\n";
    showDay(FirstDayYear);
     cout << "\n";
    if (LeapYear == 0)
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
    showDay(FirstDayYear);
    cout << "\n";
    showDate31();
    cout << "\n";

    cout << " April " << year << "\n";
    showDay(FirstDayYear);
    cout << "\n";
    showDate30();
    cout << "\n";

    cout << " May " << year << "\n";
    showDay(FirstDayYear);
    cout << "\n";
    showDate31();
     cout << "\n";

    cout << " June " << year << "\n";
    showDay(FirstDayYear);
    cout << "\n";
    showDate30();
    cout << "\n";

    cout << " July " << year << "\n";
    showDay(FirstDayYear);
    cout << "\n";
    showDate31();
    cout << "\n";

    cout << " August " << year << "\n";
    showDay(FirstDayYear);
    cout << "\n";
    showDate31();
    cout << "\n";

    cout << " September " << year << "\n";
    showDay(FirstDayYear);
    cout << "\n";
    showDate30();
    cout << "\n";

    cout << " October " << year << "\n";
    showDay(FirstDayYear);
    cout << "\n";
    showDate31();
    cout << "\n";

    cout << " November " << year << "\n";
    showDay(FirstDayYear);
    cout << "\n";
    showDate30();
    cout << "\n";

    cout << " December " << year << "\n";
    showDay(FirstDayYear);
    cout << "\n";
    showDate31();
    cout << "\n";





return 0;
}

void showDay(int FirstDay)
{
    switch (FirstDay)
    {



case 0:
    cout << " Sun  Mon  Tues  Wed  Thurs  Fri  Sat \n";
    break;

case 1:
    cout << " Mon  Tues  Wed  Thurs  Fri  Sat  Sun \n";
    break;

case 2:
    cout << " Tues  Wed  Thurs  Fri  Sat  Sun  Mon  \n";
    break;

case 3:
    cout << " Wed  Thurs  Fri  Sat  Sun  Mon  Tues \n";
    break;

case 4:
    cout << " Thurs  Fri  Sat  Sun  Mon  Tues  Wed \n";
    break;

case 5:
    cout << " Fri  Sat  Sun  Mon  Tues  Wed  Thurs \n";
    break;

case 6:
    cout << " Sat  Sun  Mon  Tues  Wed  Thurs  Fri \n";
    break;
    }
}

void showDate31()
{
    int date;

    date = 0;

    while (date < 31)
    {
        date++;

        cout << date << setw(10);
    }
}

void showDate30()
{
    int date = 0;

    while (date < 30)
    {
        date++;
        cout << date << setw(10);
    }
}

void showFeb()
{
    int date = 0;

    while (date < 28)
    {
        date++;
        cout << date << setw(10);
    }
}

void showLeapFeb()
{
    int date = 0;

    while (date < 29)
    {
        date++;
        cout << date << setw(10);
    }
}
