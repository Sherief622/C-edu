#include <stdio.h>
#include <stdlib.h>

void bubblesort(int * array, int n);
void swap(int *xp, int *yp);

int main(int argc, char ** argv)
{
    int i, n;
    int * array;

    printf("\nPlease input the size of the array (1 to 50): ");
    scanf(" %d", &n);

    if(n < 1 || n > 50)
    {
        printf("\nInvalid array size.\n");
        return 1;
    }
    array = (int *)malloc(sizeof(int));
    printf("\nPopulate the array that will be sorted: \n");
    for(i = 0; i < n; i++)
    {
        printf("\nelement -%d: ", i);
        scanf("%d", &array[i]);
    }

    printf("\nYour unsorted array values are: \n||");
    for(i = 0; i < n; i++)
    {
        printf(" %d ||", array[i]);
    }
    printf("\n");
    bubblesort(array, n);
    printf("\n");
    free(array);
    return 0;
}

void swap (int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubblesort(int * array, int n)
{
    int i, j;
    int s;
    for(i = 0; i< n-1; i++)
    {
        s = 0;
        for(j = 0; j < n-i-1; j++)
        {
            if (array[j] > array[j+1])
            {
                swap(&array[j], &array[j+1]);
                s = 1;
            }
        }
        if(s == 0)
        {
            break;
        }
    }

    printf("\n Your sorted array values are: \n||");
    for(i = 0; i < n; i++)
    {
        printf(" %d ||", array[i]);
    }
    printf("\n");
}
