#include <iostream>

using namespace std;

int main()
{
   int days;
   double people, signUpRate;

   people = 1;
   days = 0.00;



   while(people <= 4250)
   {
       signUpRate = .001 * (4500 - people);
       days = 1 + days;
       people = signUpRate + people;

       cout << (int) people << " people signed up in "
            << (int) days << " days "
            << " \n";

   if (people <= 1250)
   {
       signUpRate = .05 * people;
       days = 1 + days;
       people = signUpRate + people;

       cout << (int) people << " people signed up in "
            << (int) days << " days "
            << " \n";
   }

   if  (1250 <= people && people < 2750)
   {
       signUpRate = .1 * people;
       days = 1 + days;
       people = signUpRate + people;



       cout << (int) people << " people signed up in "
            << (int) days << " days "
            << " \n";
   }


   if   (2750 <= people && people < 3250)
   {
       signUpRate = .05 * people;
       days = 1 + days;
       people = signUpRate + people;


       cout << (int) people << " people signed up in "
            << (int) days << " days "
            << " \n";
   }

   if   (3250 <= people && people < 3750)
   {
       signUpRate = .05 *(4000 - people);
       days = 1 + days;
       people = signUpRate + people;


       cout << (int) people << " people signed up in "
            << (int) days << " days "
            << " \n";
   }


   if  (3750 <= people && people < 4250)
   {
       signUpRate = .01 *(4500 - people);
       days = 1 + days;
       people = signUpRate + people;



       cout << (int) people << " people signed up in "
            << (int) days << " days "
            << " \n";
   }



   }


























    return 0;
}
