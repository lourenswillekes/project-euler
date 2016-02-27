#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;

    for(a=0; a<1000; a++){
        for(b=0; b<1000; b++){
            for(c=0; c<1000; c++){
                if( (((a*a)+(b*b))==(c*c)) && ((a+b+c)==1000) ){
                    printf("%d\n", a*b*c);
                }
            }
        }
    }

    return 0;
}
