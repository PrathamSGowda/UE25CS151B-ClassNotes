#include<stdio.h>
// struct student
// {
//     int rn;
//     char name[100];
//     int m;
// }s1;
int main()
{
    // FILE *fp;
    // char ch;
    // printf("%d\n",fp);
    // fp=fopen("data1.txt","r");
    // printf("%d\n",fp);
    // if(fp==NULL)
    //     printf("not successfull\n");
    // else
    //     printf("Successfull\n");
    // while((ch=fgetc(fp))!=EOF)
    // {
    //     printf("%c",ch);
    // }
    // fclose(fp);
    // FILE *fp,*fp1;
    // fp=fopen("data1.txt","r");
    // fp1=fopen("data2.txt","w");
    // char a[100];
    // while(fgets(a,20,fp)!=NULL)
    // {
    //     // printf("%s",a);
    //     //fputs(a,stdout);
    //     fputs(a,fp1);
    // }

    // FILE *fp=fopen("data1.txt","r");
    // FILE *fp1=fopen("data2.txt","w");
    // int a;
    // fscanf(fp,"%d",&a);
    // // fprintf(stdout,"%d",a);
    // fprintf(fp1,"%d",a);
    // fclose(fp);


    // FILE *fp=fopen("data1.txt","r");
    // int a[5];
    // int i=0;
    // while(i<5)
    // {   fscanf(fp,"%d",&a[i]);
    //     i++;
    // }
    // for(i=0;i<5;i++)
    // {
    //     fprintf(stdout,"%d\t",a[i]);
    // }

    // FILE *fp=fopen("Student.txt","w");

    // scanf("%d %s %d",&s1.rn,s1.name,&s1.m);
    // fwrite(&s1,sizeof(s1),1,fp);
    // fclose(fp);
    // FILE *fp1=fopen("student.txt","r");
    // fread(&s1,sizeof(s1),1,fp);
    // //printf("%d %s %d",s1.rn,s1.name,s1.m);
    // fwrite(&s1,sizeof(s1),1,stdout);
    // fclose(fp1);
    

    FILE *fp=fopen("data1.txt","r");
    char ch;
    if(fp==NULL)
    {
        printf("Error\n");
    }
    else
        printf("Successfull\n");
    printf("%d\n",ftell(fp));
    fputc(fp,stdout);
    fseek(fp,5,SEEK_SET);

    return 0;
}