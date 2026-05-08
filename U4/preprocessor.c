#include <stdio.h>
#define PI 3.14
#define MAX 10
#define STR "hello"
int main()
{
    printf("%f\n",PI); //this comment must be stripped down during pre processing
    printf("%f\n",PI*2);
    // PI = 6.7 // throws error because this is not a variable and there is no memory allocation for it
    // #define PI 6.7 // throws warning but works (not recomended)
    int a[MAX];
    printf("%d\n",MAX); // size of array = 10
    printf("%s\n",STR);
    return 0;
}