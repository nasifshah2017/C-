//File: Lab 10.cpp
// Name: Syed Nasif Ali (201304650)
// Username: x2013ijn
// Course: CSCI 161
// Purpose: Lab 10
// Date: 2015/11/26
// The Program functions as Sieve Of Eratosthenes by outputting
// the list of primes in the range of 2 to 1000.


#include <iostream>
#define LastNumber 1001

using namespace std;

int main()
{
    int  i, prime[LastNumber], p, j, c;

    for (i = 2; i<LastNumber; i++) prime[i] = i;

    for (i=2; i<LastNumber; i++)
    {
        p = prime[i];

if (p != 0)

        {
          cout << p << "  ";
          for (j = p*p; j<LastNumber; j+=p) prime[j] = 0;
        }
}
    return 0;
}
