#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student
{
	int rn;
	char name[20];
	int marks;
};
void read(struct student s[],int n);
void display(struct student *[],int n);
void init(struct student s[],struct student *[],int n);
void sortn(struct student *[],int n);
void sortm(struct student *[],int n);
void swap( struct student** lhs,  struct student** rhs) 
{ 
	struct student* temp = *lhs; 
	*lhs = *rhs; 
	*rhs = temp; 
} 
int main()
{
	struct student s[100];
	struct student *p[100];
	int n;printf("Enter n\n");int ch;
	scanf("%d",&n);
	read(s,n);
	init(s,p,n);
	display(p,n);
	printf("Enter choice\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: printf("sort by name\n");
				  sortn(p,n);
				  display(p,n);
				  break;
		case 2: printf("sort by marks\n");
				  sortm(p,n);
				  display(p,n);
				  break;
		default: exit(0);
	}
	return 0;
}
void sortn(struct student *p[],int n)
{
	int i,j,pos;
	for(i=0;i<n;i++)
	{
		pos=i;
		for(j=i+1;j<n;j++)
		{
			if(strcmp(p[pos]->name,p[j]->name)>0)
			pos=j;
		}
		if(pos!=i)
		{
			swap(&p[pos],&p[i]);
		}
	}
}
void sortm(struct student *p[],int n)
{
	int i,j,pos;
	for(i=0;i<n;i++)
	{
		pos=i;
		for(j=i+1;j<n;j++)
		{
			if(p[pos]->marks>p[j]->marks)
			pos=j;
		}
		if(pos!=i)
		{
			swap(&p[pos],&p[i]);
		}
	}
}
void read(struct student s[],int n)
{
	int i;
	for(i=0;i<n;i++)
		scanf("%d %s %d",&s[i].rn,&s[i].name,&s[i].marks);
}
void init(struct student s[],struct student *p[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		p[i]=&s[i];
	}
}
void display(struct student *p[],int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%d %s %d\n",p[i]->rn,p[i]->name,p[i]->marks);
}