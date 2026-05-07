#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct student
{
    char name[100];
    int rn;
};
void swap( struct student** lhs,  struct student** rhs) 
{ 
	struct student* temp = *lhs; 
	*lhs = *rhs; 
	*rhs = temp; 
}
void sortrn(struct student *p[],int n)
{
	int i,j,pos;
	for(i=0;i<n;i++)
	{
		pos=i;
		for(j=i+1;j<n;j++)
		{
			if(p[pos]->rn>p[j]->rn)
			pos=j;
		}
		if(pos!=i)
		{
			swap(&p[pos],&p[i]);
		}
	}
}
void sortname(struct student *p[],int n)
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
		printf("%d %s\n",p[i]->rn,p[i]->name);
}
int main()
{
    FILE *fp = fopen("student.csv","r");
    struct student s[100];
    char a[100];
    fgets(a,100,fp); // read column name
    char *item;
    int i=0,n,ch;
    while(fgets(a,100,fp))
    {
        item = strtok(a,",");
        s[i].rn = atoi(item);
        item=strtok(NULL,",");
        strcpy(s[i].name,item);
        i++;
    }
    n=i;
    struct student *p[100];
    init(s,p,n);
	display(p,n);
    printf("\n");
	printf("Enter 1 to sort by name\n");
	printf("Enter 2 to sort by roll no\n");
	printf("Enter choice : ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: printf("sort by name\n");
				  sortname(p,n);
				  display(p,n);
				  break;
		case 2: printf("sort by roll no\n");
				  sortrn(p,n);
				  display(p,n);
				  break;
		default: exit(0);
	}
	FILE *fp1 = fopen("sorted.csv","w");
	fprintf(fp1,"rollno,name\n");
	for(i=0;i<n;i++)
	{
		fprintf(fp1,"%d,%s",p[i]->rn,p[i]->name);
	}
}