#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define NUM 100

int main()
{
    int i, sqsum=0,
        j, sumofsq=0,
        squaredsum[NUM],
        sumofsquares[NUM];

    for(i=0; i<NUM; i++){

        squaredsum[i] = i+1;
        sumofsquares[i] = (squaredsum[i] * squaredsum[i]);

        sqsum += squaredsum[i];
        sumofsq += sumofsquares[i];
    }

    printf("%d", ((sqsum * sqsum)-sumofsq));

    return 0;
}
