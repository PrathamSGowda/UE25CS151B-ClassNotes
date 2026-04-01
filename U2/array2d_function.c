// #include <stdio.h>
// void read(int a[][5],int,int); // column size mandatory
// void display(int a[][5],int,int); // column size mandatory
// int main()
// {
//     int a[5][5];
//     int r,c;
//     printf("Enter rows and columns\n");
//     scanf("%d %d",&r,&c);
//     read(a,r,c);
//     printf("\n");
//     display(a,r,c);
// }
// void read(int arr[5][5],int r,int c)
// {
//     printf("enter the elements\n");
//     for(int i=0;i<r;i++)
//     {
//         for(int j=0;j<c;j++)
//             scanf("%d",&arr[i][j]);
//     }
// }
// void display(int arr[5][5],int r,int c)
// {
//     for(int i=0;i<r;i++)
//     {
//         for(int j=0;j<c;j++)
//             printf("%d\t",arr[i][j]);
//         printf("\n");
//     }
    
// }


// pass pointer to 2D array as a parameter to function
// #include <stdio.h>
// void read(int a[][5],int,int); // column size mandatory
// // void display(int (*)[5],int,int); // column size mandatory
// //void display(int a[m][n],int m,int n);
// void display(int m,int n, int a[m][n]);
// int main()
// {
//     int a[5][5]; int (*p)[5] = a;
//     int r,c;
//     printf("Enter rows and columns\n");
//     scanf("%d %d",&r,&c);
//     read(a,r,c);
//     printf("\n");
//     //display(p,r,c);
//     display(a,r,c);
// }
// void read(int arr[5][5],int r,int c)
// {
//     printf("enter the elements\n");
//     for(int i=0;i<r;i++)
//     {
//         for(int j=0;j<c;j++)
//             scanf("%d",&arr[i][j]);
//     }
// }

// void display(int (*p)[5],int r,int c)
// {
    // for(int i=0;i<r;i++)
    // {
    //     for(int j=0;j<c;j++)
    //         printf("%d\t",*(*(p+i)+j));
    //     printf("\n");
    // }
    
// }

// void display(int m,int n,int a[m][n])
// {

// }