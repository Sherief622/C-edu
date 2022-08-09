#include <stdio.h>
#include <stdlib.h>

int main (int argc, char ** argv)
{
    FILE *fp;
    char arr[1000];
    char fname[20] = "testtext.txt";


    fp = fopen(fname, "w");
    if (fp == NULL)
    {
        printf("ERROR OPENING FILE");
        exit(1);
    }

    printf("Input a sentence for the file: ");
    fgets(arr, sizeof arr, stdin);
    fprintf(fp, "%s", arr);    



    fclose(fp);
    printf("\n The file %s was created successfully.\n\n", fname);
    return 0;
}