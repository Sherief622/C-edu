#include <stdio.h>
#include <stdlib.h>

int main (int argc, char ** argv)
{
    FILE *fp;
    char buff[1000];
    char fname[20];

    printf("\nInput file name to be opened eg (file.txt): ");
    scanf("%s", fname);

    fp = fopen(fname, "r");
    if (fp == NULL)
    {
        printf("\nERROR: UNABLE TO OPEN FILE\n");
        exit(1);
    }
    printf("\nFile opened...\n");
    fgets(buff, 1000, (FILE*)fp);
    printf("\n%s\n", buff);
    printf("\nFile printed, closing...\n");
    
    fclose(fp);
    printf("\nFile closed...\n");
    return 0;
}
