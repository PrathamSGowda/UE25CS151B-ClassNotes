#include <stdio.h>
int main()
{
    float temp;
    printf("\nEnter the temperature : ");
    scanf("%f",temp);
    if (temp>=30)
        printf("I'ts hot");
    else if (temp>=25 && temp<30)
        printf("I'ts warm");
    else if (temp>=20 && temp<25)
        printf("I'ts cool");
    else
        printf("I'ts cold");

    return 0;
}