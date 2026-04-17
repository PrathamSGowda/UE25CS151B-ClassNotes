#include <stdio.h>
struct student
{
    int rn; char name[20]; int m;
};
void read(struct student*,int); // array of struc as parameter to func (pass by reference)
void display(struct student*,int);
void sort(struct student*,int);
int search(struct student*,int,int);
int main()
{
    struct student s[100]; int n; int res,key;
    // struct student *p = s; // pointer to array of structure
    printf("Enter the number of records : \n");
    scanf("%d",&n);
    read(s,n);
    printf("Before sorting\n");
    display(s,n);
    // read(p,n);
    // display(p,n);
    sort(s,n);
    printf("After sorting\n");
    display(s,n);
    printf("Enter the element to search : ");
    scanf("%d",&key);
    res = search(s,n,key);
    if(res == -1)
        printf("Element not found\n");
    else
        printf("Element found at %d index",res);
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
int search(struct student *s,int n,int key)
{
    int low,high,mid;
    low = 0; high = n-1; 
    while(low<=high)
    {
        mid = (low+high)/2;
        if(s[mid].m==key)
            return mid;
        if(s[mid].m<key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}