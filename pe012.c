#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tricount = 0,
        trivalue = 0,
        divcount = 0,
        j;

    while(divcount <= 500){

        divcount = 0;
        tricount++;
        trivalue += tricount;

        for(j=1; j<=trivalue; j++){
            if(trivalue % j == 0){
                divcount++;
            }
        }
    }

    printf("%i: %i", trivalue, divcount);

    return 0;
}
