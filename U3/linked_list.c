#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}node_t;
void display(node_t*);
void freelist(node_t*);
int main()
{
    // creation of head node
    /*
    node_t *head;
    head = (node_t*)malloc(sizeof(node_t));
    head -> data = 100; // scanf("%d",&head->data);
    head -> next = NULL;
    printf("%d\n",head->data);
    */

    /*
    node_t *s;
    s = (node_t*)malloc(sizeof(node_t));
    s -> data = 100;
    s -> next = (node_t*)malloc(sizeof(node_t));
    s -> next -> data = 200;
    s -> next -> next = (node_t*)malloc(sizeof(node_t));
    s -> next -> next -> data = 300;
    s -> next -> next -> next = NULL;
    */

    // creation of nodes using while loop
    int n; // number of ndoes
    n = 1;
    node_t *head,*newnode,*temp;
    head = (node_t *)malloc(sizeof(node_t));
    head -> data = 100;
    temp = head; // head node cannot be disturbed so we use temp to traverse
    while(n<=4)
    {
        newnode = (node_t*)malloc(sizeof(node_t));
        scanf("%d",&newnode->data);
        newnode -> next = NULL;
        temp -> next = newnode;
        temp = newnode;
        n++;
    }
    display(head); printf("\n");
    freelist(head);
    return 0;
}
void display(node_t *p)
{
    while(p!=NULL)
    // while(p->next!=NULL) // will only print first two
    {
        printf("%d\t",p->data);
        p = p->next;
    }
}
void freelist(node_t *p)
{
    node_t *d = p;
    while(p!=NULL)
    {
        p = p->next;
        printf("deleting %d\n",d->data);
        free(d);
        d=p;
    }
}