// pointer inside structure
#include <stdio.h>
struct demo
{
    int a;
    int *p;
};
int main()

{
    // pointer pointing to external variable
    /*
    struct demo d;
    int c;
    d.a = 100;
    c = 200;
    d.p = &c;
    printf("%d %d %d %d\n",d.a,d.p,&c,*(d.p));
    */

    // pointer pointing to member of structure
    /*
    struct demo d;
    d.a = 100;
    d.p = &d.a;
    printf("%d %d %d %d\n",d.a,d.p,&d.a,*(d.p));

    // pointer pointing to another structure memmber
    struct demo d1;
    d1 = d;
    printf("%d %d %d %d\n",d1.a,d1.p,&d1.a,*(d1.p)); // the pointer in d1 is pointing to a in d
    *(d1.p) = 200;
    printf("%d %d %d %d\n",d.a,d1.p,&d1.a,*(d1.p));
    */

    // pointer pointing to its own structure member
    /*
    struct demo d1,d2;
    d1.a = 100;
    d1.p = &d1.a;
    d2.a = 200;
    d2.p = &d2.a;
    printf("%d %d %d %d\n",d1.a,d1.p,&d1.a,*(d1.p));
    printf("%d %d %d %d\n",d2.a,d2.p,&d2.a,*(d2.p));
    */
}