#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv)
{
    int a[5] = {5, 4, 3, 2, 1};
    int *p = a;
    int zaz = p + 3;
    int pa = *a;
    int *aa  = &a[2];
    int ppa2 = pa - 2;

    printf("\na is %p\n", (void*)p);
    printf("pointer to a is %d\n", pa);
    printf("*a - 2 is %d\n", ppa2);
    printf("arr[2] is %d\n", a[2]);
    printf("Address of element 2 is %p\n", (void*)aa);
    printf("P is %p\n", p);
    printf("p+3 is %d\n", zaz);

    return 0;
}
