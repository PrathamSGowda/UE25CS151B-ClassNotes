#include <stdio.h>
/*
typedef int myint; // used to rename datatype name
int main()
{
    myint a = 10;
    printf("%d\n",a);
}
*/

/*
typedef struct student
{
    int rn;
    char name[20];

}st;
int main()
{
    st s1 = {1,"abc"};
    printf("%d %s\n",s1.rn,s1.name);
}
*/

/*
struct address // inner structure
{
    char city[20];
    int pincode;
};
struct student // outer structure
{
    int rn;
    char name[20];
    struct address a1;
};
*/

// embeded structure
/*
struct student // outer structure
{
    int rn;
    char name[20];
    struct address // inner structure
    {
    char city[20];
    int pincode;
    }a1;
};

int main()
{
    struct student s1;
    printf("%d\n",sizeof(s1));
    // printf("%d\n",sizeof(a1)); // error because a1 isnt declared in main function
    scanf("%d %s %s %d",&s1.rn,s1.name,s1.a1.city,&s1.a1.pincode); // inner stucture is accessed with (outerstruct).(innerstruct).variable
    printf("%d %s %s %d",s1.rn,s1.name,s1.a1.city,s1.a1.pincode);
}
*/

// STRUCTURE SHOULD BE ALWAYS DECLARED BEFORE FUNCTION CALL
/*
struct student
{
    int rn;
    char name[20];
};
// void read(struct student s1);
void read(struct student *s1);
void display(struct student);
int main()
{
    struct student s1;
    printf("Address of s1 = %d\n",&s1);
    // read(s1); // pass by value
    read(&s1); // pass by reference
    display(s1); 
}
//void read(struct student s1)
void read(struct student *s1)
{
    //printf("Address of s1 = %d\n",&s1); // different address
    printf("Address of s1 = %d\n",s1); // same address
    //scanf("%d %s",&s1.rn,s1.name);
    scanf("%d %s",&(s1->rn),s1->name);
}
void display(const struct student s1) // better to use const keyword for safe programming
// const keyword does not work with pointer variable
{
    printf("Address of s1 = %d\n",&s1); // different address
    printf("%d %s",s1.rn,s1.name); // garbage value for pass by value
}
*/

// STRUCTURE IN FUNCTION

// structure variable as a parameter to function
// pointer to structure as a parameter to function
// return type is pointer to structure and parameter is a structure
// return type is structure variable and parameter is a pointer to structure
// return type is pointer to structure and parameter is also pointer to structure

struct demo
{
    char a;
    int i;
};
// struct demo modify(struct demo); // struct as a parameter
// struct demo modify(struct demo*); // pointer to struct as a parameter 
// struct demo* modify(struct demo); // return pointer and parameter is instance variable
struct demo* modify(struct demo*); // return type and parameter both pointer
int main()
{
    struct demo d1 = {'A',65};
    //struct demo d2;
    //d2 = modify(d1);
    //struct demo *d2;
    //d2 = modify(&d1);
    //d2 = modify(d1);
    struct demo *d2 = &d1;
    struct demo *d3;
    d3 = modify(d2); // modify(&d1)
    printf("%c %d\n",d1.a,d1.i);
    printf("%c %d\n",d2->a,d2->i);
}
/*
struct demo modify(struct demo d1) // does not change value in d1
{
    d1.i = 74;
    return d1;
}
*/
/*
struct demo modify(struct demo *d1) // changes value in d1 as well
{
    d1->i = d1->i+10;
    return *d1; // return instance variable when parameter is pointer
}
*/
/*
struct demo* modify(struct demo d1)
{
    d1.i = d1.i+10;
    return &d1; // return address when return type is pointer
    // the above is an example of dangling pointer because the func call block is deleted after execution 
}
*/
struct demo* modify(struct demo *d1)
{
    d1->i = d1->i+10;
    return d1; // will lead to undefined behaviour
}