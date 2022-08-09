#include <stdio.h>
#include <stdlib.h>

int main (int argc, char ** argv)
{   
    int arr[10];
    int i;

    
    printf("\nInput 10 elements in the array: \n");
    for (i = 0 ; i < 10;i++)
    {
        printf("\n element - %d: ", i);
        scanf("%d", &arr[i]);
    }
    
    
    printf("\nElements in the array are: ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);    
    }
    printf("\n");


    return 0;
}