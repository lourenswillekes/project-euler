#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //long long unsigned int
    char numberarray[100][51];
    char str1[51], stemp[11];
    int i, j;
    long long int sum=0, itemp, carry;

    FILE *fp;

    fp = fopen("numbers.txt", "r");
    if(fp == NULL){
        perror("File could not be opened");
        return(-1);
    }

    for(j=0; j<199; j++){
        fgets(str1, 51, fp);
        //printf("%s\n", str1);
        if(j%2 == 0){
            strcpy(numberarray[j/2], str1);
        }
    }
    fclose(fp);

    for(j=9; j>=0; j--){
        for(i=0; i<100; i++){

            itemp = atoi(strncpy(stemp, &numberarray[i][5*j], 5));
            printf("Line %d: %lld    --    ", i, itemp);
            if(j==0){
                sum += 100000*itemp;
            }
            else{
                sum += itemp;
            }
            printf("Sum: %lld\n", sum);

        }
        if(j>1){
            carry = sum/pow(10, 5);
            sum = carry;
        }
    }

    printf("%lld\n", sum);



    return 0;
}
