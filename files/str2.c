#include <stdio.h>
#include <stdlib.h>

int main (int argc, char ** argv)
{
    char string[120];
    int i;
    int ini;
    int fin;

    printf("\nInput the string: ");
    fgets(string, sizeof string, stdin);

    printf("\nInput the position to start extraction: ");
    scanf("%d", &ini);

    printf("\nInput the length of the substring: ");
    scanf("%d", &fin);

    printf("\nThe substring is: ");

    for(i = ini; i <= fin; i++)
    {
        printf("%c", string[i]);
    }
    printf("\n");

    return 0;
}