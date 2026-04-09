#include <stdio.h>
#include <string.h>
int main()
{
    char pre[] = "Welcome ";
    char name[20];
    printf("\nEnter your name : ");
    scanf("%[^\n]s",name);
    strcat(pre,name);
    printf("\n%s",pre);

    return 0;
}