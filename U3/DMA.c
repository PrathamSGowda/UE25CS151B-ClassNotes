#include <stdio.h>
#include <stdlib.h>
int main()
{
    // malloc function
    int *ptr = (int *)malloc(sizeof(int));
    if(ptr==NULL)
        printf("Memory allocation failed\n");
    else
        printf("Memory allocated\n");
    printf("ptr = %d\n",ptr); // the first address location allocated in heap which is stored in stack
    printf("*ptr = %d\n",*ptr); // before initialisation prints garabage value
    *ptr = 10;
    printf("*ptr = %d\n",*ptr); // after initialisation 
    return 0;
}