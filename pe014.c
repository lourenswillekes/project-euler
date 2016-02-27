#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int n,
        current,
        counter,
        longestcounter = 0,
        longestnumber;

    for(n=1; n<1000000; n++){
        // Puts value into a variable so n can be changed
        current = n;
        // Resets number of terms
        counter = 1;

        // Until the value equals 1
        while(current>1){
            // It checks if it is even, then n/2, or odd, then 3*n+1
            // This syntax works just like if?     :else      ;
            ((current%2) == 0)?(current = current/2):(current = 3*current+1);
            // Increment number of terms
            counter++;
        }
        // If the counter is larger, store the value of the counter and the number
        if(counter >= longestcounter){
            longestcounter = counter;
            longestnumber = n;
        }
        //printf("%lli -- %lli\n", n, counter);
    }

    printf("%lli", longestnumber);

    return 0;
}
