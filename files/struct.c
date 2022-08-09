#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int num;
    int sum;
} node;

int main(int argc, char ** argv)
{
    node * array;
    int i, n, sum = 0;


    printf("\nPlease input the size of array, no more than 20: ");
    scanf("%d", &n);


    if ( n < 1 || n > 20)
    {
        printf("\nERROR, VALUE OUT OF RANGE\n");
        return 1;
    }


    array = (node *)malloc(n * sizeof(node));


    for (i = 0; i < n; i ++)
    {
        array[i].num = rand() % n + 1;
        sum += array[i].num;
        array[i].sum = sum;
    }


    printf("\nThe %d numbers stored in the struct array are: \n", n);
    for (i = 0; i < n; i++)
    {
        printf("%d ", array[i].num);
    }
    printf("\n");


    printf("\nThe cumulative sum of the array is:\n ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", array[i].sum);
    }
    printf("\n");


    free(array);
    return 0;
}