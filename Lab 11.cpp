/* File: lab01.cpp
 * ------------------------------
 * Name:     your name here
 * Username: your username here
 * Course:   CSci 161
 * Purpose:  Lab #1
 * Date:     Today's date
 *
 * This program accepts a name and displays it several times.
 */

#include <iostream>
#include <string>

using namespace std;

/* Function Prototype */
void Space(int numSpaces);

/* Main program */
int main()
{

   return 0;
}

/*
 * Function: Space
 * Usage:    Space(numSpaces);
 * -------------------------------------------------------
 * This function displays numSpaces blanks on the output.
 */

void Space(int numSpaces)
{
   while(numSpaces > 0)
   {
      cout << ' ';
      numSpaces--;
   }
}
