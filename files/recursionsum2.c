#include <stdio.h>

int sumOfRange(int);

int main(int argc, char ** argv)
{
    int n1;
    int sum;

    printf("\nInput the last number of range from 1: \n");
    scanf("%d", &n1);

    sum = sumOfRange(n1);
    printf("\nThe Sum of numbers from 1 to %d: %d\n\n", n1, sum);

    return 0;
}

int sumOfRange(int n1)
{
    int res;
    if(n1 == 1)
    {
        return 1;
    }
    else
    {
        res = n1 + sumOfRange(n1 - 1);
    }
    /*This function works by first starting the n1 in (n1 + sor()) with the input number
    eg: n1 = 5, then res = 5 + sor(4) where sor(4) contains res = 4 + sor(3) so on till we
    have included all desired values*/
    return res;
}