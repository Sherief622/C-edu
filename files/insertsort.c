#include <stdio.h>
#include <stdlib.h>

void insertionsort(int * array, int n);

int main (int argc, char ** argv)
{
    int * array;
    int i, n;

    printf("\nPlease input the number of elements in your array: ");
    scanf("%d", &n);
    if (n < 1 || n > 30)
    {
        printf("\nERROR: Value out of range.\n");
        return 1;
    }
    array = (int*)malloc(sizeof(int));
    printf("\nPlease populate the array that will be sorted: \n");
    for(i = 0; i < n; i++)
    {
        printf("Element -%d: ", i);
        scanf(" %d", &array[i]);
    }
    printf("Your unsorted array values: \n||");
    for(i = 0; i < n; i++)
    {
        printf(" %d ||", array[i]);
    }
    printf("\n");

    insertionsort(array, n);
    printf("Your sorted array values are: \n||");
    for(i = 0; i < n; i++)
    {
        printf(" %d ||", array[i]);
    }
    printf("\n");
    free(array);
    return 0;
}

void insertionsort(int * array, int n)
{
    int holepos;
    int insertval;
    int i;

    for (i = 1; i < n; i++)
    {
        insertval = array[i];
        holepos = i;

        while (holepos > 0 && array[holepos-1] > insertval)
        {
            array[holepos] = array[holepos-1];
            holepos = holepos - 1;
        }

        array[holepos] = insertval;
    }
}