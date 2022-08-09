#include <stdio.h>
#include <stdlib.h>

struct node
{
    int num;
    struct node * next;
}*stnode;

void createNodeList(int n);
void displayList();
void reverseList(struct node ** head_ref);
void insertNode(int data);
int removeselect (int sel);

int main (int argc, char ** argv)
{
    int n, data, sel;
    printf("Input the number of list elements: ");
    scanf("%d", &n);

    createNodeList(n);
    printf("Data entered into the list: \n");
    displayList();

    reverseList(&stnode);
    printf("\nThe list in reverse order: \n");
    displayList();

    reverseList(&stnode);
    printf("Input number to push to the begginning of the list: \n");
    scanf("%d", &data);
    insertNode(data);
    displayList();

    printf("\nInput the node you would like to remove: ");
    scanf("%d", &sel);
    removeselect(sel);
    printf("\nLinked list after deleting selected node: \n");
    displayList();
    return 0;
}

void createNodeList(int n)
{
    struct node *fnNode, *tmp;
    int num, i;
    stnode = (struct node *)malloc(sizeof(struct node));

    if (stnode == NULL)
    {
        printf("Allocation Failed");
    } 
    else
    {
        printf("Input data for node 1: ");
        scanf("%d", &num);
        stnode->num = num;
        stnode->next = NULL;
        tmp = stnode;
        for(i = 2; i <= n; i++)
        {
            fnNode = (struct node *)malloc(sizeof(struct node));
            if (fnNode == NULL)
            {
                printf("Memory cannot be allocated..");
                break;
            }
            else
            {
                printf("Input data for node %d: ", i);
                scanf(" %d", &num);

                fnNode->num = num;
                fnNode->next = NULL;

                tmp->next = fnNode;
                tmp = tmp->next;
            }
        }
    }
}

void displayList()
{
    struct node *tmp;
    if (stnode == NULL)
    {
        printf("List is empty");
    }
    else
    {
        tmp = stnode;
        while (tmp != NULL)
        {
            printf("Data = %d\n", tmp -> num);
            tmp = tmp->next;
        }
    }
}

void reverseList(struct node ** head_ref)
{
    struct node * prev = NULL;
    struct node * current = *head_ref;
    struct node * next;
    while (current != NULL)
    {
        next = current -> next;
        current -> next = prev;
        prev = current;
        current = next;
    }
    *head_ref = prev;
}

void insertNode(int data)
{
    struct node *newnode;

    newnode = (struct node*)malloc(sizeof(struct node));
    if (newnode == NULL)
    {
        printf("Insert Allocation failed");
    }
    else
    {
        newnode->num = data;
        newnode->next = stnode;
        stnode = newnode;
    }
}

int removeselect (int sel)
{
    int i = 0;
    int retval = -1;
    struct node *current = stnode;
    struct node *tmpnode = NULL;

    for(i = 0; i < sel-1; i++)
    {
        if(current->next == NULL)
        {
            printf("Remove failed");
            return -1;
        }
        current = current -> next;
    }
    if (current->next == NULL)
    {
        printf("Remove failed");
        return -1;
    }
    tmpnode = current->next;
    retval = tmpnode->num;
    current->next = tmpnode->next;
    free(tmpnode);
    return retval;
}
