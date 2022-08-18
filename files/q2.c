#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv)
{
    int i = 1, j = 2, k;
    float x = 0.5, y = 10.3, z;

    k = i/j;
    z = x + i / j;
    if(i++ > 6 && j++ > 6)
    {
        k+=5;
    }

    printf("I is %d", i);
    printf("j is %d", j);
    printf("k is %d", k);
    printf("x is %f", x);
    printf("y is %f", y);
    printf("z is %f", z);


    return 0;
}