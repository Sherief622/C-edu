#include <stdio.h>
#include <stdlib.h>

void binarysearch(int * array, int n, int x);

int main(int argc, char ** argv)
{
    int * array;
    int n, i, x;

    printf("\nInput the number of elements in the array: ");
    scanf("%d", &n);
    array = (int *)malloc(sizeof(int));
    printf("\nPlease populate the array in ascending order: \n");
    for (i = 0; i < n; i++)
    {
        printf("\nElement -%d: ", i);
        scanf("%d", &array[i]);
    }
    for (i = 0; i < n; i++)
    {
        if(array[i - 1] > array[i])
        {
            printf("\nERROR: Please input your values in ascending order.\n");
            return 1;
        }
    }
    printf("\nPlease input the value you would like to search: ");
    scanf("%d", &x);
    binarysearch(array, n, x);
    free(array);
    return 0;
}


void binarysearch(int *array, int n, int x)
{
    int lowerBound = 0;
    int upperBound = n;
    int midpoint;

    while (lowerBound <= upperBound)
    {
        if (upperBound < lowerBound)
        {
            printf("\nERROR: X does not exist\n");
            return;
        }

        midpoint = lowerBound + (upperBound - lowerBound) / 2;

        if(array[midpoint] < x)
        {
            lowerBound = midpoint + 1;
        }
        if(array[midpoint] > x)
        {
            upperBound = midpoint - 1;
        }
        if(array[midpoint] == x)
        {
            printf("\n%d Found at location %d\n", x, midpoint);
            break;
        }
    }
}