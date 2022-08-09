#include <stdio.h>
#include <stdlib.h>

int main (int argc, char ** argv)
{   
    int arr[100];
    int num;
    int i;
    int max;
    int min;

    printf("\nInput the number of elements to store in the array: ");
    scanf("%d", &num);

    printf("\nInput %d elements into the array: \n", num);
    for(i = 0; i < num; i++)
    {
        printf("element - %d: ", i);
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    min = arr[0];
    for(i = 0; i < num; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }

        if(arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("\nMaximum element is: %d\n", max);
    printf("\nMinimum element is: %d\n", min);



    return 0;
}