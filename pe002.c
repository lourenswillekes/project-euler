#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float   first=1,
            second=2,
            third=3,
            sum=2;

    do{
        third=first+second;
        if((third/2)==floor(third/2)){
            sum+=third;
        }
        first=second;
        second=third;
    }while(third<=4000000);

    printf("%.0f", sum);
    return 0;
}
