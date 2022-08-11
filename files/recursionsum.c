#include <stdio.h>
#include <stdlib.h>

void recursiveAdd (int n, int m);

int main(int argc, char ** argv)
{   
    int n;
    int m = 0;

    printf("\nInput the value of n: ");
    scanf("%d", &n);
    recursiveAdd(n, m);


    return 1;
}

void recursiveAdd (int n, int m)
{
    if (m < n)
    {
        m++;
        printf("%d\n", m);
        recursiveAdd(n, m);
        
    }
}