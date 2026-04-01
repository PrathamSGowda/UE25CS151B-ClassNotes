#include <stdio.h>
int main()
{
    int a[5] = {10,20,30,40,50};
    int *p;
    p = a;
    
    printf("Address in a is %d\n",a);
    printf("Address of a[0] is %d\n",&a[0]);
    printf("Address in p is %d\n",p);

    // array traversal

    // for(int i=0; i<5; i++)
    // {
    //     printf("%d\t",a[i]); // i[a] and a[i] are the same
    // }
    // printf("\n");
    // for(int i=0; i<5; i++)
    // {
    //     printf("%d\t",p[i]); // i[p] and p[i] are the same
    // }
    // printf("\n");
    // for(int i = 0; i<5; i++)
    // {
    //     printf("%d\t",*(p+i));
    // }
    // printf("\n");
    // printf("Address in a and p is %d and %d\n",a,p);
    // for(int i = 0; i<5; i++)
    // {
    //     printf("%d\t",*(p)+i);
    // }
    // printf("\n");
    // for(int i = 0; i<5; i++)
    // {
    //     printf("%d\t",i[a]);
    // }
    // printf("\n");
    // for(int i = 0; i<5; i++)
    // {
    //     printf("%d\t",(*p)++);
    // }
    // printf("\n");
    // for(int i = 0; i<5; i++)
    // {
    //     printf("%d\t",i[a]);
    // }
    // printf("Address in p is %d\n",p);
    // printf("Address in a is %d\n",a);
    // for(int i=0; i<5; i++)
    // {
    //     printf("%d\t",*p);
    //     p++;
    // }
    // printf("\n");
    // printf("Address in p is %d\n",p);
    // printf("Address in a is %d\n",a);
    // p = a;
    // for(int i=0; i<5;i++, p++)
    // {
    //     printf("%d\t",*p);  
    // }
    // printf("\n");
    // p = a;
    // for(int i=0; i<5; i++)
    // {
    //     printf("%d\t",*p++);
    // }
    return 0;
}
