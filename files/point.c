#include <stdio.h>
#include <stdlib.h>


int main (int argc, char **argv)
{
    int m = 10, n, o;
    int *z = &m;

    printf("\nz stores the address of m: %p\n", (void*)z);
    printf("*z stores the value of m: %i\n", *z);
    printf("&m is the address of m: %p\n", (void*)&m);
    printf("&n stores the address of n: %p\n", (void*)&n);
    printf("&o stores the address of o: %p\n", (void*)&o);
    printf("&z stores the address of z: %p\n", (void*)&z);
    printf("\n");
    return 0;
}
