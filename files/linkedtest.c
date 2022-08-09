#include <stdio.h>
#include <stdlib.h>


struct sPerson
{
    int age;
};

struct sPerson *getNewPerson(const int age)
{
    struct sPerson * newPerson = NULL;
    newPerson = malloc(sizeof(struct sPerson));
    newPerson->age = age;
    printf("Created new person at %p\n", newPerson);
    return newPerson;
}

void printPerson(const struct sPerson *person, const char *comment)
{
    if (person == NULL)
    {
        printf("%s is NULL\n", comment);
    }
    else
    {
        printf("%s: age:%d address:%p\n", comment, person->age, person);
    }

}

int main(int argc, char ** argv)
{
    struct sPerson *first = NULL;
    struct sPerson *second = NULL;
    struct sPerson *third = NULL;

    printPerson(first, "first");
    printPerson(second, "second");
    printPerson(third, "third");

    printf("\nAssining age....\n");
    first = getNewPerson(125);
    second = getNewPerson(100);
    third = getNewPerson(200);
    printf("\nPrinting age....\n");
    printPerson(first, "first");
    printPerson(second, "second");
    printPerson(third, "third");

    free(first);
    free(second);
    free(third);
    first = NULL;
    second = NULL;
    third = NULL;
    return 0;
}