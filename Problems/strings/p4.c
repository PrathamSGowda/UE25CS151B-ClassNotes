#include <stdio.h>
#include <string.h>
int main()
{
    char ch[101];
    printf("Please enter your feedback\n");
    scanf("%s",ch);
    if(strlen(ch)>100)
        printf("shorten the feedback\n");
    else
        printf("thank you for the feedback\n");
}