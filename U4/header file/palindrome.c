#include <stdio.h>
#include <string.h>
#include "palindrome.h"
int npalin(int n)
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
int cpalin(char s[])
{
    int left = 0;
    int right = strlen(s)-1;
    while(left<right)
    {
        if(s[left]!=s[right])
            return 0;
        left++;
        right--;
    }
    return 1;
}