#include <stdio.h>
#include <stddef.h>
struct sample
{
    unsigned int a : 1; // width = 1
    unsigned int b : 2;  // width = 2
    /*
        without bit field the size of this would 
        be 8 bytes but with bit field it is 4 bytes
    */
   unsigned int c : 4; // should take integer within the range in this case 0 to 15 (2^n - 1)
   // unsigned int c : 33; // error max can only be 32
   // int *a : 2; // pointer is noot allowed
   // int a[5] : 3; // array is not allowed
   // static int b:3; // storage class is also not allowed
   // unsigned int :3; // un-named bit field this can be used as a padding in structure
};
int main()
{
    struct sample s1;
    printf("%d\n",sizeof(struct sample));
    printf("%d\n",sizeof(s1));
    s1.a = 1; s1.b = 2;
    // scanf("%d",&s1.b); // throws error because address of bit-field cannot be taken
    printf("%d %d\n",s1.a,s1.b);
    // s1.c = 16; // does not throw error but does not print the value
    // printf("%d\n",s1.c);
}