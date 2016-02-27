#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n = 20;

    int i,j;
    long long int k[21][21];





    for(i=0; i<=n; i++){
        k[0][i] = 1;
        k[i][0] = 1;
    }

    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            k[i][j] = k[i][j-1] + k[i-1][j];
        }
    }

    printf("%lld", k[n][n]);

    return 0;
}
