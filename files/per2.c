#include <stdio.h>
#include <stdlib.h>


int main()
{
    int I, II, III;
    int xi;
    int entr;
    int j;
    int n;
    int sum;

    printf("\nInput the first integer: \n");
    scanf("%d", &I);

    printf("\nInput the second integer: \n");
    scanf("%d", &II);

    printf("\nInput the third integer: \n");
    scanf("%d", &III);

    if( I > II && I > II )
    {
        xi = I;
    }
    else if( II > I && II > III)
    {
        xi = II;
    }
    else if(III > I && III > II)
    {
        xi = III;
    }
    else if (III == I && III == II && I == II){
        xi = III;
    }
    printf("Maximum value of the three integers: %d\n", xi);

    printf("\nInput an integer: ");
    scanf("%d", &entr);

    if (entr == 0) 
    {
        printf("\nPositive\n");
    }
    else if (entr > 0 && (entr%2) == 0)
    {
        printf("\nPositive Even\n");
    }
    else if (entr > 0 && (entr%2)!= 0)
    {
        printf("\nPositive Odd\n");
    }
    else if (entr < 0 && (entr%2) == 0)
    {
        printf("\nNegative Even\n");
    }
    else if (entr < 0 && (entr%2) != 0)
    {
        printf("\nNegative Odd\n");
    }

    printf("\nInput an integer >0: ");
    scanf("%d", &j);

    for ( n = 1; n <= j; n++)
    {
        printf("%d ", n);
        sum += n;
    }
    printf("\nThe sum of natural numbers up to %d terms: %d\n", j, sum);
    return 0;
}