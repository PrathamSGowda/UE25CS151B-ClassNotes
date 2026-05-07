// demo of errno, strerror, perror, feof, ferror
#include <stdio.h>
#include <errno.h>
#include <string.h>
int main()
{
    /*
    FILE *fp = fopen("data4.txt","r");
    printf("%d\n",errno);
    printf("%s\n",strerror(errno));
    perror("bad code");
    */

    
    FILE *fp1 = fopen("data1.txt","a");
    fputc('a',fp1);
    printf("%d\n",errno);
    printf("%s\n",strerror(errno));
    perror("bad code");
    

    /*
    FILE *fp2 = fopen("data1.txt","r"); // opening in write mode and using fscanf doesnt theow error in perror

    int a[10];
    int i=0;
    while(i<5)
    {
        fscanf(fp2,"%d",&a[i]);
        i++;
    }
    for(i=0;i<5;i++)
        printf("%d\t",a[i]);
    if(ferror(fp2))
    {
        printf("error\n");
    }
    perror("\nbad code");
    */

    /*
    FILE *fp3 = fopen("data2.txt","r");
    char ch;
    while(!feof(fp3))
    {
        ch = fgetc(fp3);
        putchar(ch);
    }
    */

    /*
    FILE *fp2 = fopen("data1.txt","a");

    int a[10];
    int i=0;
    while(i<5)
    {
        fscanf(fp2,"%d",&a[i]);
        i++;
    }
    if(ferror(fp2))
    {
        printf("error\n");
    }
    for(i=0;i<5;i++)
        printf("%d\t",a[i]);
    clearerr(fp2);
    if(ferror(fp2))
    {
        printf("error\n");
    }
    fclose(fp2);
    */
    return 0;
}