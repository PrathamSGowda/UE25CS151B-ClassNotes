#include <stdio.h>
struct student
{
    int rn;
    char name[20];
    int m;
// }st[5]; // global declaration
};
/*
int main()
{
    // struct student s[5] = {{1,'A',24},{2,'B',86},{3,'C',25},{4,'D',32},{5,'E',43}};
    // struct student s[5] = {{1,'A',24},{2,'B',22},{3,'C',25}}; // partial initialisation
    printf("address = %d\n",st);
    printf("size = %d\n",sizeof(st));
    for(int i = 0; i<5; i++) // run time initialisation
    {
        scanf("%d %s %d",&st[i].rn,st[i].name,&st[i].m);
    }
    for(int i = 0; i<5; i++)
    {
        printf("%d %s %d\n",st[i].rn,st[i].name,st[i].m);
    }
}
*/

int main()
{
    struct student s[2] = {1,'A',67,2,'B',78};
    struct student *p = s;
    printf("address of s = %d\n",s);
    printf("address of p = %d\n",p);
    printf("%d\n",*p); // wrong way to print 1 prints random value
    printf("%d\n",(*p).rn); // correct way to print 1;
}