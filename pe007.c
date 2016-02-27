#include "mylib.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int j=2,
        prime=0,
        unknown=1,
        primes[10001];

    while(unknown){
        if(isprime(j)){
            primes[prime] = j;
            prime++;
        }

        if(prime == 10001){
            unknown=0;
        }
        j++;
    }

    printf("%d", primes[10000]);

    return 0;
}
