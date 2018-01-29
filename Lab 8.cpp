// File: Lab 08.cpp
// Name: Syed Nasif Ali Shah (201304650)
// Username: x201304650
// Course: CSCI 161
// Purpose: Lab 8
// Date: 2015/11/14
// This program determines if a number is perfect or not given by the user.
// If it is perfect then it outputs the proper divisors of the number in the
//summation format.Like divisor1 + divisor2 + divisor3 = number.






#include <iostream>

using namespace std;

bool Perfect (int number);
void OutPerfect (int number);

int main()
{
    int number;
    bool Perfect;

    number = 0;

    cout << " Please input the number you want to check \n";
    cin >> number;

OutPerfect (number);

return 0;
}

/* Function: Adding up divisors
 * Usage:    sum += divisor);
 * -----------------------------
 * This function tests if a number is perfect or not,
 * by dividing it proper divisors and adding those divisors
 * together to produce the number
 *
 */


bool Perfect(int number)
{
    int divisor, remainder, sum, perfect; // Local variables

    remainder = 0;
    sum = 0;




    for (divisor = 1; divisor < number; divisor++)
    {
        remainder = number % divisor;

        if (remainder == 0)
        {



            sum += divisor;
        }
    }



            if (sum == number)
            {
                return true;
            }

            else
            {
                return false;
            }
}

/* Function: Formatting
 * Usage:    number % resultant = 0;
 * -----------------------------
 * This function arranges the divisors of the perfect
 * number in the summation format like divisor1 +
 * divisor2 + divisor3 = number
 *
 */


   void OutPerfect(int number)
   {
       if (Perfect (number)== true) // Connection with the previous function
       {
           int resultant; // Local variable

           cout << "1";

           for (resultant = 2; resultant < number; resultant++)
           {
               if (number % resultant == 0)
               {
                   cout << " + " << resultant;
               }
           }

           cout << " \n";
           cout << "The number is Perfect \n";
       }
       else
       {
           cout << "The number is imperfect\n";
       }
   }


