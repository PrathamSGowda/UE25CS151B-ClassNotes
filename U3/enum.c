// enum are not identifiers and therefore no memory is allocated
// enum assigns 0 to first member and increments it by 1 for the next members
#include <stdio.h>
enum days
{
    // mon,tue,wed,thu,fri,sat,sun
    mon=1,tue,wed,thu,fri,sat,sun // tue = 2 wed = 3 and so on
    // mon,tue,wed=6,thu,fri=10,sat,sun // 0 1 6 7 10 11 12
};
int main()
{
    // printf("%d\n",sizeof(enum days)); // 4 because integral constant
    // printf("%d\n",mon);
    // for(int i=mon;i<sun;i++)
    // {
    //     printf("%d\n",i);
    // }
    enum days d;
    printf("%d %d\n",d,sizeof(d));
    // d.mon = 1; // error because mon is a constant and we are trying to change the value of it
    // to change the value we should assign it in enum declaration 
    d = mon; // d is initialised with a integer constant monday
    printf("%d\n",d);
    return 0;
}
