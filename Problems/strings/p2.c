#include <stdio.h>
#include <string.h>
int main()
{
    char usn[] = "student";
    char ch[20];
    printf("\nEnter username : ");
    scanf("%s",ch);
    if(strcmp(usn,ch)==0)
        printf("login successful");
    else
        printf("incorrect username");
    return 0;
}