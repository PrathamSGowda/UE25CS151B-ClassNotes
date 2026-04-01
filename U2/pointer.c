#include <stdio.h>
int main()
{
    // int x = 20;
    // int *p; // declaration of pointer
    // p = &x; // initialisation of pointer

    // printf("%d\n",x); // value at x
    // printf("%d\n",&x); // address of x
    // printf("%d\n",p); // address of x
    // printf("%d\n",*p); // value at x
    // printf("%d\n",&p); // address of p

    // int y = *p; // y = x
    // y = p; // y is not a pointer variable but an integer variable
    // printf("%d\n",y);

    // int m = 12;
    // int *p;
    // p = &m;
    // printf("%d\n",*p); // 12
    // printf("before *p++ value in p is %d\n",p);
    // printf("%d\n",*p++); // 12 -> p++
    // printf("after *p++ value in p is %d\n",p);
    // printf("%d\n",*p); // udefined behaviour as p is no longer pointing to address of m

    // printf("%d\n",(*p)++); // 12 -> 13
    // printf("%d\n",*p); // 13
    // printf("%d\n",++*p); // 14
    // printf("%d\n",*++p); // udefined behaviour

    // printf("%d\n",p);
    // printf("%d\n",(int*)p+1); // +4 bytes to address of p
    // printf("%d\n",(char*)p+1); // +1 byte to address of p
    // printf("%d\n",(float*)p+1); // +4 bytes to address of p
    // printf("%d\n",(double*)p+1); // +8 bytes to address of p
    
    return 0;
}