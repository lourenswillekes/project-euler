#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    double  i=1,
            sum=0;

    while(i<1000){
        if((i/3)==floor(i/3) || ((i/5)==floor(i/5))){
            sum += i;
        }
        i++;
    }

    printf("%f", sum);

    return 0;
}
