#include <stdio.h>
#include <stdlib.h>

int main (int argc, char ** argv)
{
    char first_name[20];
    char last_name[20];
    int birth;

    printf("\nInput your first name: ");
    scanf("%s", first_name);

    printf("\nInput your last name: ");
    scanf("%s", last_name);


    printf("\nInput your year of birth: ");
    scanf("%d", &birth);

    printf("\n%s %s %d\n", first_name, last_name, birth);

    return 0;
}

