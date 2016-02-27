#include <stdio.h>
#include <stdlib.h>

long long int isprime(long long int x);

int main()
{
    long long int sum=2, j;

 /*   for(j=3; j<2000000; j++){
        if(isprime(j)){
            sum += j;
        }
    }*/

    printf("%lli", isprime(sum));

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


