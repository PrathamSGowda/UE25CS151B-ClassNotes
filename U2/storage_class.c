// automatic
/*
#include <stdio.h>
void f1();
int main()
{
    int a;
    printf("address of a = %d\tvalue of a = %d\n",&a,a);
    f1();
    return 0;
}
void f1()
{
    int b;
    printf("address of b = %d\tvalue of b = %d\n",&b,b);
}
*/

// extern
/*
#include <stdio.h>
int main()
{
    extern int a; // initialized to 0
    a=20;
    printf("address of a = %d\tvalue of a = %d\n",&a,a);
    return 0;
}
int a=40;
*/

// local static variable
/*
#include <stdio.h>
int* f1();
int main()
{
    int a = 45; //auto
    int *p;
    p = f1();
    printf("address of i = %d\tvalue of i = %d\n",p,*p);
    p = f1();
    printf("address of i = %d\tvalue of i = %d\n",p,*p);
}
int* f1()
{
    static int i=34; //local static
    i++;
    printf("address of i = %d\tvalue of i = %d\n",&i,i);
    return &i;
}
*/

// global static variable
/*
#include <stdio.h>
static int k=34; // global static
void f1();
void f2();
int main()
{
    printf("address of k = %d\tvalue of k = %d\n",&k,k);
    f1();
    printf("address of k = %d\tvalue of k = %d\n",&k,k);
    f2();
    printf("address of k = %d\tvalue of k = %d\n",&k,k);
}
void f1()
{
    k++;
}
void f2()
{
    k+=30;
}
*/

// register
/*
#include <stdio.h>
int main()
{
    int i=45;
    register int *p = &i; // register int p=&i
    printf("i = %d and address of i = %d\n",*p,p);
    //printf("address of p = %d",&p); // cannot access address of a register
}
*/

// global variable
/*
#include <stdio.h>
int k=34; // global
void f1();
void f2();
int main()
{
    printf("address = %d value = %d\n",&k,k);
    f1();
    f2();
    return 0;
}
void f1()
{
    k += 20;
    printf("address = %d value = %d\n",&k,k);
}
void f2()
{
    k = k-5;
    printf("address = %d value = %d\n",&k,k);
}
*/


