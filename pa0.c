// ECE 312H PA0
// Nina Kannan
// nlk536
// Slip days used: 0
// Spring 2025

#include "pa0.h"
#include "math.h"
#include <stdlib.h>

/*
    Write a function that takes in an integer x and returns 1 if x is prime and 0 if x is not prime.
*/
int isPrime(int x) {
    int i; //int for for loop
    int rem; //remainder when divided
    for (i = 2; i < x; i++)
    {
        rem = x % i; //find remainder when x is divided by i, using mod function
        if (rem == 0) // if it is exactly divisible, then return 0, showing it is not prime
        {
            return 0;
        }
    }

    return 1;
}

/*
    Write a function that takes in two legs of a right triangle, x and y, and returns the length of the hypotenuse.
*/
double calculateHypotenuse(double x, double y) {
    
    //square x and y
    x = x*x;
    y = y*y;

    double hyp = x + y;
    hyp = sqrt(hyp);

    return hyp;
}

/*
    Write a function that finds the greatest common divisor of two integers x and y.
*/
int gcd(int x, int y) {
    int i;
    //find smaller number
    if (x > y)
    {
        i = y;
    } 
    else 
    {
        i = x;
    }

    while (i >= 1)
    {
        // check if x is divisible by i, if yes, check for y
        int remX = x % i;
        if (remX == 0)
        {
            // check if y is divisible by i, if yes, return i as the GCD
            int remY = y % i;
            if (remY == 0)
            {
                return i;
            }
        }
        i--;
    }
    return 1;
}