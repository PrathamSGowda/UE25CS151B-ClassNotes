#include <stdio.h>
#include <string.h>
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
/*
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
*/

// union inside structure
/*
struct sample
{
    int i;
    union demo
    {
        float j; char k[20];
    }u;
};
int main()
{
    printf("%d\n",sizeof(struct sample)); // 24
    printf("%d\n",sizeof(union demo)); // 20
    struct sample s;
    s.i = 12;
    s.u.j = 34.23;
    printf("%f\n",s.u.j);
    strcpy(s.u.k,"psg");
    printf("%s\n",s.u.k);
    printf("%d\n",s.i); //memory for i is allocated seperately because its a member of struct
}
*/

// structure inside union
/*
union sample
{
    int i;
    struct sample1
    {
        char c;
        float j;
    }s1;
};
int main()
{
    union sample u;
    printf("%d\n",sizeof(union sample));
    printf("%d\n",sizeof(struct sample1)); 
    u.i = 45;
    printf("%d\n",u.i);
    u.s1.c = 'A';
    u.s1.j = 23.23;
    printf("%c %f\n",u.s1.c,u.s1.j);
}
*/