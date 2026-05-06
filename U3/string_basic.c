#include <stdio.h>
#include <string.h>
// int main()
// {
    // char ch = 'A';
    // char ch = "A"; // doesn't work
    // printf("%c\n",ch);

    // char ch[] = "hello"; // short hand notation
    // char ch[] = {'h','e','l','l','o'}; // manual notation (null character is not inserted automatically)
    // char ch[] = {'h','e','l','l','o','\0'};
    // char ch[10] = {'h','e','l','l','o','\0'}; // partial initialization
    // char ch[20] = "hello\0world"; // only prints hello
    // char ch[] = "he\\0llo"; // escape sequence, size will be 8
    // char ch[] = "he\\0llo\0"; // size will be 9 as short hand notation adds null ch at the end automatically again

    // char ch[20];
    // scanf("%s",ch); // terminates when there is a whitespace
    // scanf("%[^\n]s",ch); // terminates when entered next line
    // scanf("%[^abc]s",ch); // terminates when there is a or b or c
    // scanf("%[abc]s",ch); // only takes input if it starts with a or b or c
    
    // printf("%s\n",ch);
    // printf("%d\n",sizeof(ch));
    // printf("address = %d\n",ch);
    // printf("%c %d\n",ch[0],ch[7]); // prints ASCII value

    // char a[] = "hello world";
    // char *p = a;

    // char *p = "hello world"; // string initialisation using pointer directly

    // printf("%s\n",a);
    // printf("%s\n",p);
    // p++;
    // printf("%s\n",p); // ello world
    // printf("%c\n",p[3]); // o
    // printf("%c\n",3[p]); // o
    // a[0] = 'H';
    // printf("%s\n",a); // Hello world

    // PREDEFINED FUNCTIONS

    // char a[] = "hello world";
    // printf("len = %d\n",strlen(a)); // prints length of the string excludes NULL character

    // char b[20];
    // char c[20];
    // strcpy(b,a); // copies a into b (does include null character while copying)
    // printf("b = %s\n",b);
    // strncpy(c,b,3); // copies first 3 characters from b to c
    // printf("c = %s\n",c);

    // strcat(a,c); // concatenates a and c and stores the result in a
    // printf("a = %s\n",a); // hello worldhel
    // strncat(a,"world",3); // concatenates a and first 3 characters of "world"
    // printf("a = %s\n",a); // hello worldhelwor

    // printf("strcmp = %d\n",strcmp("abc","abc")); // compares ASCII value and if the difference is 0 then it moves to next character
    // printf("strcmp = %d\n",strcmp("abc","ghi")); // since ASCII(a) < ASCII(g) returns -1
    // printf("strcmp = %d\n",strcmp("klm","ghi")); // since ASCII(k) > ASCII(g) returns +1
    // strncmp(a,b,n) - compares the ASCII of the first n elements of a abd b

    // char s1[] = "hello world";
    // char *p; char *p1; char *p2;
    // p = strchr(s1,'l'); // searches for character 'l' in the string s1 and returns its address if found retuns the address
    // printf("found at %d\n",p-s1); // index of first l = 2
    // p1 = strchr(p+1,'l'); // searches for second 'l' character in the string
    // printf("found at %d\n",p1-s1); // index of second l = 3
    // p2 = strrchr(p,'l'); // searches for 'l' from the end of the string
    // printf("found at %d\n",p2-s1); // index of the first l from the last = 9
    // returns NULL if the character is not found in the string


// }

    // user defined function 
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

// calculate size of string using while loop