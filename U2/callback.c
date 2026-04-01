/*
#include <stdio.h>
int add(int,int,int);
int multiply(int,int,int);
int callback(int,int,int,int (*p)(int,int,int));
int main()
{
    // int (*p)(int,int,int); // function pointer
    // int (*p)(int,int);
    // int x,y,z;
    // x=2;y=3;z=5;
    // p = add; // p = &add
    // p = multiply;
    // printf("The sum is %d\n",p(x,y,z)); // add(x,y,z)
    // printf("The product is %d\n",p(x,y));
    

    int x,y,z;
    x=2;y=3;z=5;
    printf("callback sum is %d\n",callback(x,y,z,add));
    printf("callback product is %d\n",callback(x,y,z,multiply));
}
int callback(int a,int b,int c,int (*p)(int,int,int))
{
    return p(a,b,c);
}
int add(int a,int b,int c)
{
    return a+b+c;
}
int multiply(int a,int b,int c)
{
    return a*b;
}
*/

// implementation of map using callback 
// example input : 1 2 3 4 5
// example output: 1 4 9 16 25
#include <stdio.h>
void display(int*,int);
int sq(int x)
{
    return x*x;
}

int filter(int x)
{
    if (x%2==0)
        return x;
}
void callback(int [],int [],int n,int (*p)(int));
int main()
{
    int a[5] = {1,2,3,4,5};
    int b[5];
    //int (*p)(int);
    //int i;
    //p = sq;
    display(a,5);
    callback(a,b,5,filter);
    // function pointer logic 
    // for(i=0;i<5;i++)
    // {
    //     a[i]=p(a[i]);
    // }
    display(b,5);
}
void callback(int a[],int b[],int n,int (*p)(int))
{
    for(int i=0;i<5;i++)
    {
        b[i] = p(a[i]);
    }
}
void display(int *a,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
}