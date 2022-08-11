#include <stdio.h>
#include <stdlib.h>

void mergesort(int *arr, int n);
void mergerecursion(int * arr, int l, int r);
void mergesortedarr(int * arr, int l, int m, int r);


int main (int argc, char **argv)
{
    int n, i;
    int * arr;

    printf("\nPlease input your array size (1 to 20): ");
    scanf("%d", &n);

    if (n < 1 || n > 20)
    {
        printf("\nERROR: Given array size value out of range.\n");
        return 1;
    }
    arr = (int *)malloc(sizeof(int));
    printf("\nPlease input the array elements values: \n");
    for(i = 0; i < n; i++)
    {
        printf("\nelement -%d: ", i);
        scanf("%d", &arr[i]);
    }
    printf("\nYour unsorted array values are: \n||");
    for (i = 0; i < n; i++)
    {
        printf(" %d ||", arr[i]);
    }
    printf("\n");
    mergesort(arr, n);
    printf("Your sorted array values are: \n||");
    for(i = 0; i < n; i++)
    {
        printf(" %d ||", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}

void mergesort(int * arr, int n)
{
    mergerecursion(arr, 0, n-1);
}

void mergerecursion(int * arr, int l, int r)
{
    int m;
    if (l < r)
    {
        m = 1 + (r - l)/2;
        /*Send the same function the array we have divided from above to divide once more
        this happens till the array is no longer dividable*/
        mergerecursion(arr, l, m);
        mergerecursion(arr, m + 1, r);
        /*Pass the array to the function that merges the sorted array portions */
        mergesortedarr(arr, l, m, r);
    }
    

}

void mergesortedarr(int * arr, int l, int m, int r)
{
    int left_length = m - l + 1;
    int right_length = r - m;

    int temp_left[left_length];
    int temp_right[right_length];
    int i, j, k;

    for (i = 0; i < left_length; i++)
    {
        temp_left[i] = arr[l+i];
    }
    for(i = 0; i < right_length; i++)
    {
        temp_right[i] = arr[m+1+i];
    }

    for (i = 0, j = 0, k = l; k <= r; k++)
    {
        if((i < left_length) && (j >= right_length) || temp_left[i] <= temp_right[j])
        {
            arr[k] = temp_left[i];
            i++;
        }
        else 
        {
            arr[k] = temp_right[j];
            j++;
        }
    }
}