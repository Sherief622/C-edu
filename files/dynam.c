#include <stdio.h>
#include <stdlib.h>

int main (int argc, char ** argv)
{
    int *arr;
    int n, i, sum = 0;


    printf("Please input the size of array (1 to 50): ");
    scanf("%d", &n);

    /*Error checking, checks if the input is valid.*/
    if (n < 1 || n > 50)
    {
        printf("ERROR: Value provided is out of range.");
        return 1;
    }
    /*Dynamically allocate memory for our array*/
    arr = (int *)malloc(n * sizeof(int));
    /*Populate our array with the sum of all numbers up to n*/
    for (i = 0; i < n; i++)
    {
        sum += (i + 1);
        *(arr + i ) = sum;
    }
    /*FOr loop to print the sum in reverse*/
    printf("The cumulative sum of 1 to %d in reverse order is: ", n);
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    /*free the memory when we're done using. */
    free(arr);
    return 0;
}