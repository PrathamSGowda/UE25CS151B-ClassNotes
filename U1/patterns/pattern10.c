/*

* * * *
*     *
*     *
* * * *

*/

#include <stdio.h>
int main()
{
    for(int i = 1; i<=4; i++)
    {
        if(i==1 || i==4)
        {
            for(int j = 1; j<=4; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
        else
        {
            for(int k = 1;k<=6;k++)
            {
                if(k==1 || k==6)
                {
                    printf("* ");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}