#include <stdio.h>
void read (int[], int); 
void display(int[], int);
int binary_searchi(int[], int, int, int); 
// int binary_searchr(int[], int, int, int); //recursive search
int main()
{
    int a[10]; 
    int n ; int res ; int key; 
    printf("Enter n\n"); 
    scanf("%d" , &n); 
    read(a,n); 
    display(a,n);
    printf("Enter key\n"); 
    scanf("%d", &key); 
    res = binary_searchi(a,0,n-1,key);
    // res = binary_searchr(a,0,n-1,key);  //recursive search

    if(res == -1)
    {
        printf("Element not found"); 
    }
    else
    {
        printf("Element found at %d" , res); 
    }
    return 0; 
}

void read(int a[] , int n)
{
    int i; 
    for (int i = 0; i < n; i++)
    {
        scanf("%d" , &a[i]);
    }    
}


void display(int a[] , int n)
{
    int i; 
    for (int i = 0; i < n; i++)
    {
        printf("%d\t" , a[i]); 
        printf("\n"); 
    }
    
}



int binary_searchi(int a[] , int low, int high, int key)
{
    int pos = -1; int found = 0;
    int mid; 
    while (low<=high && found == 0)
    {
        mid = (low+high)/2; 
        if (a[mid] == key)
        {
            pos = mid;
            found = 1; 
        }
        else if (a[mid]>key)
        {
            high = mid - 1; 
        }
        else
        {
            low = mid + 1; 
        }            
    }
    return pos; 
}



//recursive function 


/*

int binary_searchr(int a[], int low, int high, int key,)
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
        else if (a[mid]>mid)
        {
            return binary_searchr(a,low,mid-1,key); 
        }
        else
        {
            return binary_searchr(a,mid+1,high,key); 
        }   
    }
}

*/


