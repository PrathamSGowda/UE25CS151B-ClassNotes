#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}node_t;
void display(node_t*);
int main()
{
    int n; int i=0; int a; int b;
    printf("Enter the number of nodes : ");
    scanf("%d",&n);
    node_t *head,*temp,*newnode;
    head = (node_t *)malloc(sizeof(node_t));
    temp = head;
    while(i<n)
    {
        newnode = (node_t *)malloc(sizeof(node_t));
        printf("Enter data for node %d : ",i+1);
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        temp->next=newnode;
        temp=newnode;
        i++;
    }
    head = head->next;
    printf("Enter value to insert at the beginning : ");
    scanf("%d",&a);
    printf("Enter value to insert at the end : ");
    scanf("%d",&b);
    printf("\nInitial linked list : \n");
    display(head);

    // inserting element at the end of list
    newnode = (node_t *)malloc(sizeof(node_t));
    newnode->data = b;
    newnode->next = NULL;
    temp->next = newnode;
    printf("\nAfter inserting at the end : \n");
    display(head);

    // inserting element at the start of the list
    newnode= (node_t *)malloc(sizeof(node_t));
    newnode->data = a;
    newnode->next = head;
    head = newnode;
    printf("\nAfter inserting at the start : \n");
    display(head);

    // delete element from the start of the list
    temp = head->next;
    free(head);
    head = temp;
    printf("\nAfter deleting from the start : \n");
    display(head);

    // delete element from the end of the list
    temp = head;
    while(temp->next->next != NULL)
    {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
    printf("\nAfter deleting from the end : \n");
    display(head);
}
void display(node_t *p)
{
    while(p!=NULL)
    {
        printf("%d\t",p->data);
        p = p->next;
    }
}