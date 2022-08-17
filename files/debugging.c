#include <stdio.h>
#include <stdlib.h>
#define NUM_PRIMES = 10 /*1. = Not needed in define*/

void calculate_primes(int num_primes, int primes) /*7 Return type of function is void, should return array of number*/
{/*8 Expected int but function recieved *int from main*/
    int i, j, prime, count;

    count = 0;
    i = 2 /*2 semicolon expected here*/

    while(count < num_primes) 
    {
        prime = 1;
        for(j = 2; j < i; j++) 
            if(i % j == 0)
            {
                prime = 0;
                break;
            }
        if(prime)
        {
            prime[++count] = i; /*3 Value is not array nor a pointer*/
        }
        i++;
    }
}

int main (int argc, char **argv)
{
    int i, *primes;
    
    if(!(primes = (int)calloc(NUM_PRIMES, sizeof(int)))) /*5 Assignment takes from point to int without cast*/
    {
        fprintf(stderr, "Error: unable to allocate memory\n"); /*4 character constant too long for its type*/
        return(1);
    }

    calculate_primes(NUM_PRIMES, primes); /*6 Implicit declaration of function*/
    for (i = 1; i < NUM_PRIMES; i++)/*10 variable i should start from 0 not 1*/
        printf("%f\n", primes[i]); /*9 wrong print specifier*/

    return 0;
}