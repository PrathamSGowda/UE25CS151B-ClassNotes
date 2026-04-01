// #include <stdio.h>
// void display(int arr[],int n);
// void read(int arr[],int);
// int sum(int arr[],int);
// int main()
// {
//     //int arr[5] = {10,20,30,40,50};
//     int arr[10];
//     int size;
//     int res;
//     scanf("%d",&size);
//     read(arr,size);
//     printf("base address of arr %d\n",arr);
//     //size = sizeof(arr)/sizeof(arr[0]);
//     display(arr,size);
//     res = sum(arr,size);
//     printf("The sum of elements : %d\n",res);

//     return 0;
// }

// void read(int arr[10],int size)
// {
//     printf("enter the elements\n");
//     for(int i=0;i<size;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
// }

// void display(int arr[10],int size)
// {
//     int i;
//     printf("base address of arr %d\n",arr);
//     for(i=0;i<size;i++)
//     {
//         printf("%d\t",arr[i]);
//     }
// }

// int sum(int arr[10],int size)
// {
//     int sum = 0;
//     for(int i=0;i<size;i++)
//     {
//         sum += arr[i];
        
//     }
//     return sum;
// }

// array element as a parameter
// #include <stdio.h>
// int add(int,int);
// int main()
// {
//     int a[5] = {10,20,30,40,50};
//     int res;
//     res = add(a[0],a[3]);
//     printf("result is %d\n",res);
//     return 0;
// }
// int add(int a,int b)
// {
//     return a+b;
// }

// #include <stdio.h>
// void display(int[],int);
// void modify(const int[],int,int);
// int main()
// {
//     int a[5]={1,2,3,4,5};
//     int pos,value;
//     printf("enter pos and value\n");
//     scanf("%d %d",&pos,&value);
//     printf("before modification\n");
//     display(a,5);
//     modify(a,pos,value);
//     printf("\n");
//     printf("after modification\n");
//     display(a,5);
// }

// void modify(const int a[], int pos,int value) //const keyword doesnt let you modify the array
// {
//     a[pos] = value;
// }

// void display(int a[],int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         printf("%d\t",a[i]);
//     }
// }

// pass pointer to array as a parameter to function
#include <stdio.h>
void read(int[],int);
void display(int*,int); //int* is a pointer to array
int main()
{
    int a[10];
    int size;
    int *p;
    p = a;
    printf("enter the size\n");
    scanf("%d",&size);
    read(a,size);
    display(p,size);
}
void read(int arr[10],int size)
{
    printf("enter the elements\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
}

void display(int *p,int size)
{
    int i;
    printf("base address of arr %d\n",p);
    for(i=0;i<size;i++)
    {
        printf("%d\t",p[i]); // *(p+i), *p++
    }
}