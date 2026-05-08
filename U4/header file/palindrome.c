#include <stdio.h>
#include "palindrome.h"
int palin(int n)
{
    int num = n;
    int rev = 0;
    while(num!=0)
    {
        rev = num%10 + rev*10;
        num = num/10;
    }
    return rev == n;
}