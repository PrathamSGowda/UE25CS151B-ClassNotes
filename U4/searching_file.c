#include <stdio.h>
int binary_searchr(int[], int, int, int);
int main()
{
    FILE *fp = fopen("numbers.txt","r");
    int a[10];
    int i,n;
    i = 0;n = 7;
    while(i<n)
    {
        fscanf(fp,"%d",&a[i]);
        i++;
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    int res ; int key; 
    printf("Enter key\n"); 
    scanf("%d", &key);
    res = binary_searchr(a,0,n-1,key);
    if(res == -1)
    {
        printf("Element not found"); 
    }
    else
    {
        printf("Element found at %d" , res); 
    }

    FILE *fp1 = fopen("res.txt","w");
    fprintf(fp1,"%d",res);
    return 0;
}
int binary_searchr(int a[], int low, int high, int key)
{

    if (low>high)
    {
        return -1;
    }
    else
    {
        int mid; 
        mid = (low+high)/2; 
        if (a[mid] == key)
        {
            return mid; 
        }
        else if (a[mid]>key)
        {
            return binary_searchr(a,low,mid-1,key); 
        }
        else
        {
            return binary_searchr(a,mid+1,high,key); 
        }   
    }
}
