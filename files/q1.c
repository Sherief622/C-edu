#include <stdio.h>
#include <stdlib.h>


int main(int argc, char ** argv)
{
    int i, j = 5;

    i = --j;
    j = i--;

    printf("I is %d\n", i);

    printf("J is %d\n", j);



    return 0;
}