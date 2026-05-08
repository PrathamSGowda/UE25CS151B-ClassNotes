#include <stdio.h>
#include "palindrome.h"
int main()
{
    int n;
    printf("Enter a number to check if it's pallindrome : ");
    scanf("%d",&n);
    if(palin(n))
        printf("The number is pallindrome\n");
    else
        printf("The number is not a pallindrome\n");

    return 0;
}