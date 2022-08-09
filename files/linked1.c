#include <stdio.h>
#include <stdlib.h>




typedef struct node {
int val;
struct node * next;
}node_t;

void print_list(node_t * head);

int main (int argc, char ** argv)
{   

    node_t * head = NULL;
    node_t * curr = head;
   
    head = (node_t *)malloc(sizeof(node_t));
    if (head == NULL)
    {
        printf("Dynamic Allocation fail..");
        return 1;
    }

    head->val = 1;
    head->next = (node_t *)malloc(sizeof(node_t));
    
    head->next->val = 2;
    head->next->next = (node_t *)malloc(sizeof(node_t));
    
    head->next->next->val = 3;
    head->next->next->next = NULL;
    
    while (curr != NULL)
    {
        printf("%d\n", curr->val);
        curr = curr->next;
    }
    print_list(head);
    
    free(head);
    return 0;
}

void print_list(node_t * head){
    node_t * curr = head;
    while (curr != NULL)
    {
        printf("%d -> ", curr -> val);
        curr = curr-> next;
    }
    printf("\n");
}