#include <stdio.h>
#include <conio.h>

int main()
{
    char ch;
    // ch = getchar();
    // putchar(ch);

    //line input
    // while((ch=getchar())!='\n')
    // {
    //     putchar(ch);
    // }

    // multiple line input
    printf("EOF value is %d\n",EOF);
     while((ch=getchar())!=EOF)
    {
        putchar(ch);
    }

    // ch = getc(stdin);
    // putc(ch,stdout);
    
    // while((ch=getc(stdin))!=EOF)
    // {
    //     putc(ch,stdout);
    // }

    // ch = getch();
    // putch(ch);

    // print the number of lines, number of character, number of count using getchar and putchar
    
    return 0;
}  