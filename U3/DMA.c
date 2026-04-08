#include <stdio.h>
#include <stdlib.h>
int main()
{
    /*
    // malloc function
    int n;
    printf("Enter the value of n : \n");
    scanf("%d",&n);
    int *ptr = (int *)malloc(n*sizeof(int));
    if(ptr==NULL)
        printf("Memory allocation failed\n");
    else
        printf("Memory allocated\n");
    printf("ptr = %d\n",ptr); // the first address location allocated in heap which is stored in stack

    // printf("*ptr = %d\n",*ptr); // before initialisation prints garabage value
    // *ptr = 10;
    // printf("*ptr = %d\n",*ptr); // after initialisation 

    for(int i=0;i<n;i++)
        scanf("%d",(ptr+i));
    for(int i=0;i<n;i++)
        printf("%d\t",*(ptr+i));
    
    free(ptr); // free() is used to deallocate memory
    // free() only deletes memory from the heap but the memory stored in stack is still there 
    // this is known as dangling pointer
    printf("\n");
    for(int i=0;i<n;i++)
        printf("%d\t",*(ptr+i)); // prints garbage value
    // ptr above is a dangling pointer

    // if you want to reallocate memory instead of creating new pointer initialise the old pointer as NULL
    // this pointer is known as NULL pointer
    ptr = NULL;
    // for(int i=0;i<n;i++)
    //     printf("%d\t",*(ptr+i)); // accessing NULL pointer which might crash the system

    printf("\n");
    ptr = (int*)malloc(sizeof(int)); // reallocation
    printf("ptr = %d\n",ptr);
    printf("*ptr = %d\n",*ptr); // before initialisation prints garabage value
    *ptr = 10;
    printf("*ptr = %d\n",*ptr); // after initialisation 
    */

    int *p = (int*)malloc(sizeof(int));
    printf("ptr = %d\n",p);
    p = (int*)malloc(sizeof(int));
    printf("ptr = %d\n",p); // content of p is overwritten which is bad programming
    // free() should be used and then after that intialise the pointer to NULL 

    return 0;
}