#include <stdio.h>
int main()
{
    // int a[3][2] = {{10,20},{30,40},{50,60}}; // 2d array declaration and full initialisation
    // int a[3][2] = {{10,20},{30},{50}}; // partial initialisation
    // int a[][] = {{10,20},{30,40},{50,60}}; // error column size is compulsory
    // int a[][2] = {10,20,30,40,50,60};

    int a[5][5];
    int i,j,r,c;

    // printf("%d\n",sizeof(a));
    // printf("%d\n",a); // base address

    // for(i=0; i<3; i++)
    // {
    //     for(j=0; j<2; j++)
    //     {
    //         printf("%d\t",a[i][j]);
    //     }
    //     printf("\n");
    // }

    printf("Enter the nuumber of rows and columns\n");
    scanf("%d %d",&r,&c);

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// arithmetic operations on 2D array
// transpose of a matrix