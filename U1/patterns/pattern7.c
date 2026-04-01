/*

  * 
 * *
* * *

*/

#include <stdio.h>
int main()
{
    for(int i = 1; i<=3; i++)
    {
        for(int j = 1; j<=3-i; j++)
        {
            printf(" ");
        }

        for(int k = 1; k<=i; k++)
        {
            printf("* ");
        }
        
        printf("\n");
    }

    return 0;
}