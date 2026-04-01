#include <stdio.h>
int main()
{
    // while loop
    // int count;
    // count = 1; // initialisation
    // while(count<=5) // condition
    // {
    //     printf("%d\n",count++); // update
    // }

    // for loop
    // int count, n;
    // printf("Enter n\n");
    // scanf("%d",&n);

    // for(count=1;count<=n;count++)
    // {
    //     printf("%d\n",count);
    // }

    // count = 1;
    // for(;count<=n;count++)
    // {
    //     printf("%d\n",count);
    // }

    // count = 1;
    // for(;count<=n;)
    // {
    //     printf("%d\n",count);
    //     count++;
    // }

    // do while loop
    // int count, n;
    // printf("Enter n\n");
    // scanf("%d",&n);
    // count = 1;
    // do
    // {
    //     printf("count is %d\n",count);
    //     count++;
    // } while(count<=n);
    

    /* 
        Write a C progra to calculate sum of digits in a number using
        while loop, for loop and do while loop.
    */

    // int n;
    // int sum=0;
    // printf("Enter the number : \n");
    // scanf("%d",&n);

    // while(n>0)
    // {
    //     sum += n%10;
    //     n = n/10;
    // }
    // printf("The sum is : %d\n",sum);

    // for(;n>0;n/=10)
    // {
    //     sum += n%10;
    // }
    // printf("The sum is : %d\n",sum);

    // break and continue

    int c;
    for(c=1;c<=5;c++)
    {
        if(c==3)
            continue;
        printf("%d\n",c);
    }

    return 0;
}