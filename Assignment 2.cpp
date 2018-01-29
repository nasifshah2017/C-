#include <iostream>

using namespace std;

int main()
{
   int people, secondDays, days;
   double  SignUpRate;

   people = 1;

   days = 0;

   cout << " Please enter the number of people signed up \n";
   cin >> people;

   for ( people = 1; people < 1250; people++)
   {
       SignUpRate = .05 * people;

       days = days + 1;

       switch (people)
       {
           case 500:
           cout << " It took " << days << " days to reach 500 people \n";
           secondDays = days * 2;
           cout << " It took " << secondDays << " to reach 1000 people \n";
           default:
            cout << "";
       }
   }

   cout << days << "/n";





    return 0;
}
