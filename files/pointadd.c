#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv)
{
    int I,
    II,
    *p,
    *q,
    sum;

    printf("\nInput the first number: ");
    scanf("%d", &I);

    printf("\nInput the second number: ");
    scanf("%d", &II);

    p = &I;
    q = &II;
    sum = *p + *q;

    printf("\nThe sum of the entered numbers is: %d\n", sum);




    return 0;
}