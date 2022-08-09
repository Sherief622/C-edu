#include <stdio.h>
#include <stdlib.h>

long add (long *, long *);

int main (int argc, char **argv)
{
    long I,
    II,
    *p,
    *q,
    sum;

    printf("\nInput the first number: ");
    scanf("%ld", &I);

    printf("\nInput the second number: ");
    scanf("%ld", &II);

    p = &I;
    q = &II;
    sum = add(p,q);

    printf("\nThe sum of the entered numbers is: %ld\n", sum);


    return 0;
}


long add (long *x, long *y)
{
    long sum;

    sum = *x + *y;

    return sum;
}