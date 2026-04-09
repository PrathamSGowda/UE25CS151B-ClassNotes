#include <stdio.h>
#include <string.h>
int main()
{
    char pass[20];
    printf("\nEnter the password : ");
    scanf("%s",pass);
    if(strlen(pass)<8)
        printf("\npass should be atleast 8 characters long");
    else
        printf("\nHappy New Year!\n");
    return 0;
}