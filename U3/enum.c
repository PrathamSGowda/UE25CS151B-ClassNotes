// enum are not identifiers and therefore no memory is allocated
// enum assigns 0 to first member and increments it by 1 for the next members
#include <stdio.h>
/*
enum days
{
    // mon,tue,wed,thu,fri,sat,sun
    // mon=1,tue,wed,thu,fri,sat,sun // tue = 2 wed = 3 and so on
    mon,tue,wed=6,thu,fri=10,sat,sun=19 // 0 1 6 7 10 11 19
};
int main()
{
    // printf("%d\n",sizeof(enum days)); // 4 because integral constant
    // printf("%d\n",mon);
    // enum days d;
    // printf("%d %d\n",d,sizeof(d));
    // d.mon = 1; // error because mon is a constant and we are trying to change the value of it
    // to change the value we should assign it in enum declaration 
    // d = mon; // d is initialised with a integer constant monday
    // printf("%d\n",d);

    // for(int i=mon;i<sun;i++)
    // {
    //     printf("%d\n",i);
    // }
    // return 0;

    // int arr[7] = {mon,tue,wed,thu,fri,sat,sun};
    // for(int i=0;i<7;i++)
    // {
    //     printf("%d ",arr[i]);
    // }

    // all arithmetic operators are allowed
    // printf("%d\n",mon+fri);
    // enum days n,n1,n2;
    // n = tue; n1 = fri;
    // printf("%d\n",n1-n);
    // two enums can have same integral value
    // n2 = n1; //allowed
    // printf("%d\n",n2);

}
*/
/*
enum capital
{
    Delhi,Tokyo
};
enum nation
{
    India,Japan
};
int main()
{
    enum capital n;
    enum nation n1;
    n = Japan;
    n1 = n;
    printf("%d %d\n",n,n1);
    n1 = Delhi;
    printf("%d\n",n1);

}
*/

// enum as parameter to function
enum sample
{
    a,b,c
};
void f1(enum sample);
int main()
{
    enum sample s;
    //s = a;
    scanf("%d",&s);
    f1(s);
    return 0;
}
void f1(enum sample s)
{
    switch(s)
    {
        case 0 : printf("a\n"); break;
        case 1 : printf("b\n"); break;
        case 2 : printf("c\n"); break;
        default : printf("invalid\n"); break;
    }
}