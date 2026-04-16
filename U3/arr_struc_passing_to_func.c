#include <stdio.h>
struct student
{
    int rn; char name[20]; int m;
};
void read(struct student*,int); // array of struc as parameter to func (pass by reference)
void display(struct student*,int);
void sort(struct student*,int);
int main()
{
    struct student s[100]; int n;
    // struct student *p = s; // pointer to array of structure
    printf("Enter the number of records : \n");
    scanf("%d",&n);
    read(s,n);
    display(s,n);
    // read(p,n);
    // display(p,n);
    sort(s,n);
    display(s,n);
    return 0;
}
void read(struct student *s,int n)
{
    for(int i=0; i<n; i++)
        scanf("%d %s %d",&s[i].rn,s[i].name,&s[i].m);
        // scanf("%d %s %d",&(s+i)->rn,(s+i)->name,&(s+i)->m);
}
void display(struct student *s, int n)
{
    for(int i=0; i<n; i++)
        printf("%d %s %d\n",s[i].rn,s[i].name,s[i].m);
}
void sort(struct student *s,int n)
{
    int i,j,pos;
    struct student t;
    for(i=0;i<n-1;i++)
    {
        pos = i;
        for(j=i+1;j<n;j++)
        {
            if(s[j].rn<s[pos].rn)
                pos = j;
        }
        if(pos!=i)
        {
            t = s[i];
            s[i] = s[pos];
            s[pos] = t;
        }
    }
}