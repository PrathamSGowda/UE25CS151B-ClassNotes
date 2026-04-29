#include <stdio.h>
int main()
{
    FILE *fp; // pointer points to a structure containing attributes of the file
    char ch;
    printf("%d\n",fp);
    fp = fopen("data1.txt","r"); // opening file in read mode
    printf("%d\n",fp);
    if(fp==NULL)
        printf("Not successfull\n");
    else
        printf("Successfull\n");
    while((ch=fgetc(fp))!=EOF)
    {
        printf("%c",ch);
        // fputc(ch,stdout);
    }
    fclose(fp);
    return 0;
}