#include <stdio.h>
void read(int [],int);
void display(int [],int);
void selectionsort(int [],int);
void swap(int*,int*);
int main()
{
    int a[10];
    int n;
    printf("Enter n\n");
    scanf("%d",&n);
    read(a,n);
    printf("Before sorting\n");
    display(a,n);
    selectionsort(a,n);
    printf("\n");
    printf("After sorting\n");
    display(a,n);
    return 0;
}
void read(int a[10],int n)
{
    printf("Enter the elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void display(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
void selectionsort(int a[],int n)
{
    int i,j,pos;
    for(i=0;i<n-1;i++)
    {
        pos = i;
        for(j=i+1;j<n;j++)
        {
            if(a[pos]>a[j])
                pos = j;
        }
        if(pos!=i)
            swap(&a[pos],&a[i]);
    }
}
void swap(int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}