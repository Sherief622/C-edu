#include <stdio.h>
#include <stdlib.h>
#define NUM_PRIMES 10 /*possible error*/

int calculate_primes(int num_primes, int *primes)
{/*error above*/
    int i, j, prime, count;

    count = 0;
    i = 2; 

    while(count < num_primes) /*error*/ 
    {
        prime = 1; /*error here*/
        for(j = 2; j < i; j++) /*error here*/ 
            if(i % j == 0)
            {
                prime = 0;
                break;
            }
        if(prime)
        {
            primes[++count] = i; 
        }
        i++;
    }
}

int main (int argc, char **argv)
{
    int i, *primes;
    
    if(!(primes = (int *)calloc(NUM_PRIMES, sizeof(int)))) /*5 Assignment takes from point to int without cast*/
    {
        fprintf(stderr, "Error: unable to allocate memory\n"); /*4 character constant too long for its type*/
        return(1);
    }

    calculate_primes(NUM_PRIMES, *primes); /*6 Implicit declaration of function*/
    for (i = 0; i <= NUM_PRIMES; i++)/*10 variable i should start from 0 not 1*/
        printf("%d\n", primes[i]); 

    return 0;
}