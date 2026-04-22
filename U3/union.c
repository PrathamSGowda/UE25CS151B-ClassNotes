#include <stdio.h>
/*
struct sample
{
    int a;
    char b;
    float c;
};
union demo
{
    int a;
    char b;
    float c;
};
int main()
{
    printf("%d\n",sizeof(struct sample)); // 12
    printf("%d\n",sizeof(union demo)); // 4 - size is taken as the size of the largest member in the union
    union demo d;
    d.a = 8;
    printf("%d\n",d.a);
    d.b = 'C';
    printf("%c\n",d.b);
    d.c = 67;
    printf("%f\n",d.c);
    // printf("%d %c %f\n",d.a,d.b,d.c); // corrupted output
}
*/

// union inside union
/*
union demo
{
    int i;
    union
    {
        char k;
        float j;
    }u;
};
int main()
{
    printf("%d\n",sizeof(union demo));
    union demo d;
    printf("Enter i\n");
    scanf("%d",&d.i);
    printf("%d\n",d.i);
    d.u.k = 'C';
    printf("%c\n",d.u.k);
    d.u.j = 56.34;
    printf("%f\n",d.u.j);
    // printf("%d\n",d.u.i); // error as i is member of outer union
}
*/

union demo
{
    int i;
    union sample
    {
        char k;
        float j;
    };
};
int main()
{
    printf("%d\n",sizeof(union demo));
    printf("%d\n",sizeof(union sample));
    union sample s1;
    s1.k = 'D';
    printf("%c\n",s1.k);
    s1.j = 22.23;
    printf("%f\n",s1.j);
}