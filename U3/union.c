#include <stdio.h>
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