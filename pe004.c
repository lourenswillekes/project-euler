#include "mylib.h"
#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int i, j, k, l, m=1;

    for(i=999; i>99; i--){
        for(j=999; j>99; j--){

            k = i*j;
            l = intflip(k);

            if( (k == l) && (k>m) ){
                m=k;
            }
        }
    }

    printf("%d", m);

    return;
}
