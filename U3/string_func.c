// user defined function 

#include <stdio.h>
// length of a string

/*
int my_length(char ch[])
{
    int len = 0;
    for(int i=0;ch[i]!='\0';i++)
    {
        len+=1;
    }
    return len;
}
int main()
{
    char ch[]="hello";
    printf("%d",my_length(ch));
}
*/
/*
int len(char*);
int main()
{
    char a[] = "hello";
    printf("len=%d\n",len(a));
    return 0;
}

// using iterative way
int len(char *a)
{
    int i=0;
    while (a[i]!='\0')
    {
        i++;
    }
    return i;
}

// using pointer arithmetic
int len(char *a)
{
    int i=0;
    while(*a) // *a!='\0'
    {
        i++;a++;
    }
    return i;
}
*/

// copy function
/*
void copy(char*,char*);
int main()
{
    char a[] = "hello";
    char b[20];
    copy(b,a);
    printf("b=%s\n",b);
}

// using iteration
// void copy(char *b, char *a)
// {
//     int i;
//     while(a[i]!='\0')
//     {
//         b[i] = a[i];
//         i++;
//     }
//     b[i]='\0';
// }

// using pointer arithmetic
void copy(char *b, char *a)
{
    int i;
    while(*a!='\0')
    {
        *b = *a;
        a++;b++;
    }
    *b='\0';
}
*/

// concatenate function
/*
void concatenate(char*,char*);
int main()
{
    char a[] = "hello";
    char c[] = "world";
    concatenate(a,c);
    printf("a=%s\n",a);
    return 0;
}

// using iterative
// void concatenate(char *a, char *c)
// {
//     int i=0,j=0;
//     while(a[i]!='\0')
//     {
//         i++;
//     }
//     while(c[j]!='\0')
//     {
//         a[i]=c[j];
//         i++;j++;
//     }
//     a[i]='\0';
// }

// using pointer arithmetic
void concatenate(char *a, char *c)
{
    while(*a)
        a++;
    while(*c)
    {
        *a = *c;
        a++;c++;
    }
    *a = '\0';
}
*/

// compare function
/*
int compare(char*,char*);
int main()
{
    int res;
    res = compare("abc","abg");
    if(res==0)
        printf("equal\n");
    else if(res>0)
        printf("ASCII of str1>str2");
    else
        printf("ASCII of str1<str2");
}

// using iteration
// int compare(char *a, char *b)
// {
//     int i;
//     for(i=0; a[i]!='\0' && b[i]!='\0' && a[i]==b[i]; i++);
//     return a[i]-b[i];
// }

// using pointer arithmetic
int compare(char *a, char *b)
{
    int i;
    for(; *a && *b && *a==*b; a++,b++);
    return *a-*b;
}
*/