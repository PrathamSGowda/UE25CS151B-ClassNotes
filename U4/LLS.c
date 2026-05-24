#include<stdio.h>
typedef struct node
{
	int data;
	struct node *next;
}node_t;
void display(node_t*);
void freelist(node_t*);
int main()
{
	struct node *head;
	struct node *newnode,*temp;
	int n,i;i=1;
	head=(node_t*)malloc(sizeof(node_t));
	head->data=100;
	temp=head;
	printf("enter n\n");scanf("%d",&n);
	while(i<=n)
	{
		newnode=(node_t*)malloc(sizeof(node_t));
		printf("Enter %d value\n",i);
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		temp->next=newnode;
		temp=newnode;
		i++;
	}
	/*
	s=(node_t*)malloc(sizeof(node_t));
	s->data=100;
	s->next=(node_t*)malloc(sizeof(node_t));
	s->next->data=200;
	s->next->next=(node_t*)malloc(sizeof(node_t));
	s->next->next->data=300;
	s->next->next->next=NULL;*/
	//display(s);
	display(head);
	//freelist(s);
	freelist(head);
}
void freelist(node_t *p)
{
	node_t *d=p;
	while(p!=NULL)
	{
		p=p->next;
		printf("deleting %d\n",d->data);
		free(d);
		d=p;
	}
}
void display(node_t *p)
{
	while(p!=NULL)
	{
		printf("%d\t",p->data);
		p=p->next;
	}
}
