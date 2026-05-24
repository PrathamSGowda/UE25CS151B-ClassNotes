#include <stdio.h>
// portable program
int main()
{
    #if __MINGW32__
        printf("Winodws \n");
        char a,b;
        scanf("%c",&a);
        fflush(stdin);
        scanf("%c",&b);
        printf("%c %c\n",a,b);

    #elif __unix__
        printf("Linux \n");
        char c,d;
        scanf("%c",&c);
        __fpurge(stdin);
        scanf("%c",&d);
        pritnf("%c %c\n",c,d);

    #elif __APPLE
        printf("MacOS \n");
    #else
        printf("other OS\n");
    #endif
    return 0;
}