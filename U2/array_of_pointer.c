#include <stdio.h>
void display(int *[],int);
int main()
{
    /*
    int a,b,c;
    a=10;b=20;c=30;
    int *p[5]; // array of pointer
    p[0] = &a;
    p[1] = &b;
    p[2] = &c;
    printf("%d %d %d\n",&a,&b,&c);
    printf("address = %d value = %d\n",p[0],*p[0]);
    printf("address = %d value = %d\n",p[1],*p[1]);
    printf("address = %d value = %d\n",p[2],*p[2]);
    */

    int a[5] = {11,22,33,44,55};
    int *p[5];
    int i;
    for(i=0;i<5;i++)
    {
        p[i]=&a[i];
    }
    display(p,5);
    // for(i=0;i<5;i++)
    // {
    //     printf("address = %d value = %d\n",p[i],*p[i]);
    // }
}
void display(int *p[],int n)
{
    int i;
    for(i=0;i<5;i++)
    {
        printf("address = %d value = %d\n",p[i],*p[i]);
    }
}