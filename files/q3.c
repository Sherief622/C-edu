#include <stdlib.h>
#include <stdio.h>

int main(int argc, char ** argv)
{
    int incr, decr = 9, total = 0;

    for(incr = 0; incr < decr; incr++)
    {
        total += decr - incr;
        decr--;
    }

    printf("incr is %d\n", incr);
    printf("decr is %d\n", decr);
    printf("total is %d\n", total);


    return 0;
}