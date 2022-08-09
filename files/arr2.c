#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv)
{   
    int num;
    int arr[100];
    int i;

    printf("\nInput the number of elements to store in the array (max 100): ");
    scanf("%d", &num);

    printf("\nInput %d elements into the array: ", num);
    for (i = 0; i < num; i++)
    {
        printf("\nelement - %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nThe values stored into the array are: \n");
    for (i = 0; i < num ; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nThe values stored into the array in reverse are: \n");

    for(i = num-1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}