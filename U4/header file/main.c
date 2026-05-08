#include <stdio.h>
#include "palindrome.h"
int main()
{
    int n;
    printf("Enter a number to check if it's palindrome : ");
    scanf("%d",&n);
    if(npalin(n))
        printf("The number is a palindrome\n");
    else
        printf("The number is not a palindrome\n");

    char ch[50];
    printf("Enter a word to check if it's a palindrome : ");
    scanf("%s",ch);
    if(cpalin(ch))
        printf("The word is a palindrome\n");
    else
        printf("The word is not a palindrome\n");


    return 0;
}