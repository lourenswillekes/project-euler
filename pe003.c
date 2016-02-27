#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define VAL 600851475143

long long int isprime(long long int x);

int main()
{
    long long int j;

    for(j=1; j<=VAL; j++){
        if(VAL%j==0){
            printf("%lli  x  %lli\n", j, VAL/j);
            if(isprime(VAL/j)){
                printf("%lli\n", VAL/j);
                j=VAL+1;
            }
        }
    }

    return 0;
}

long long int isprime(long long int x)
{
    long long int j, prime=1;

    for(j=2; j*j<=x; j++){
        if(x%j==0){
            prime=0;
            j=x;
        }
    }
    return prime;
}
