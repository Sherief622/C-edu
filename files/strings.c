#include <stdio.h>
#include <stdlib.h>

int main (int argc, char**argv)
{
    char string[120];
    int i;

    printf("\nInput the string: ");
    fgets(string, sizeof string, stdin);
    printf("\nThe String you entered is:\n");

    for(i = 0; i < sizeof string; i++)
    {
        printf("%c ", string[i]);
    }

    return 0;
}