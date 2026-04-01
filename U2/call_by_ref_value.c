// call by value and call by reference
// swap two values

#include <stdio.h>
//bvoid swap(int,int);
void swapr(int*,int*);
int main()
{
    int a,b;
    printf("enter values\n");
    scanf("%d %d",&a,&b);
    printf("before swap function call\n");
    printf("a=%d\tb=%d\n",a,b);
    printf("address of a=%d\taddress of b=%d\n",&a,&b);
    // swap(a,b);
    swapr(&a,&b);
    printf("after swap function call\n");
    printf("a=%d\tb=%d\n",a,b);
}

// call by value
// void swap(int a, int b)
// {
//     int temp;
//     printf("address of a=%d\taddress of b=%d\n",&a,&b);
//     temp = a;
//     a=b;
//     b=temp;
//     printf("Inside swap function\n");
//     printf("a=%d\tb=%d\n",a,b);

// }


// call by reference
void swapr(int *a, int *b)
{
    int temp;
    printf("address in a=%d\taddress of b=%d\n",a,b);
    temp = *a;
    *a=*b;
    *b=temp;
    printf("Inside swap function\n");
    printf("a=%d\tb=%d\n",*a,*b);

}