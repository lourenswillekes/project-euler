#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number=1,
        smallest,
        j;

    while(number){
        smallest=1;
        for(j=11; j<=20; j++){
            if((number%j)!=0){
                smallest=0;
                j=20;
            }
        }
        if(smallest){
            printf("%d\n", number);
            number=-1;
        }
        number++;
    }

    return 0;
}
