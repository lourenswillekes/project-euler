#ifndef MYLIB_H_INCLUDED
#define MYLIB_H_INCLUDED


#include <math.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>


int isprime(int x);
int intflip(int x);



//If x is prime it returns 1, else 0.
int isprime(int x)
{
    int j,
        factors=0,
        prime=0;

    for(j=1; j<=x; j++){
        if(x%j == 0){
            factors++;
        }
    }

    if(factors==2){
        prime=1;
    }

    return prime;
}


//Reverses the order of the digits in x.
int intflip(int x)
{
    char num[500],
         temp;

    int j;

    sprintf(num, "%d", x);

    for(j=0; j<=(strlen(num)/2); j++){
        temp = num[j];
        num[j] = num[strlen(num)-j-1];
        num[strlen(num)-j-1] = temp;
    }

    sscanf(num, "%d", x);

    return x;
}



#endif // MYLIB_H_INCLUDED
