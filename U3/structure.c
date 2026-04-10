#include <stdio.h>
#include <string.h>
/*
struct sample
{
    char a[20];
    // char b;
    int i;
    float j;
};
int main()
{
    // struct sample s1;
    struct sample s1 = {"Yellow",67,10.23}; // struct intialisation
    printf("address = %d\n",&s1);
    // printf("%d\n",sizeof(sample)); // error because memory is allocated to instance variable not the structure
    printf("%d\n",sizeof(s1));
    printf("%s %d %f\n",s1.a,s1.i,s1.j);
    return 0;
}
*/
/*
struct student
{
    int rollno;
    char name[20];
    int marks;
}s2; // global variable
*/
/*
int main()
{
    struct student s1 = {12,"PSG",98};
    struct student s3 = {20,"twin"}; // partial initialisation, members not initialised are made 0 or '\0'
    struct student s4 = {.name="moment",.marks=67}; // designated initialising
    //struct student s5 = {rollno:23,name:"ma",marks=100}; // designated initialising

    struct student s6;
    scanf("%d",&s6.rollno);
    scanf("%s",s6.name);
    scanf("%d",&s6.marks);

    s2.rollno = 17;
    // s2.name = "hello" // error - string is assignment incompatible
    strcpy(s2.name,"fishG");
    s2.marks = 99;
    c
    printf("roll no = %d\tname = %s\tmarks = %d\n",s2.rollno,s2.name,s2.marks);
    printf("roll no = %d\tname = %s\tmarks = %d\n",s3.rollno,s3.name,s3.marks);
    printf("roll no = %d\tname = %s\tmarks = %d\n",s4.rollno,s4.name,s4.marks);
    printf("roll no = %d\tname = %s\tmarks = %d\n",s6.rollno,s6.name,s6.marks);
}
*/
/*
int main()
{
    struct student *s = &s2; // pointer to structure
    struct student s3;
    s -> rollno = 12; // arrow operator is used for pointer variable
    strcpy(s -> name,"psg");
    s -> marks = 29;
    printf("roll no = %d\tname = %s\tmarks = %d\n",s->rollno,s->name,s->marks);

    printf("%d\n",sizeof(s2)); // 28
    printf("%d\n",sizeof(s)); //size of pointer variable is fixed and depends on the machine

    s3=s2; // structure is assignment compatible
    printf("address of s2 = %d\taddress of s3 = %d\n",&s2,&s3);
    printf("roll no = %d\tname = %s\tmarks = %d\n",s3.rollno,s3.name,s3.marks);

    // comapring structures
    if(strcmp(s2.name,s3.name)==0)
        printf("equal\n");
    else
        printf("not equal\n");
}
*/

/*
create employee struct containing member elements as name and salary of an employee for 3 employees, find out the max salary
of an employe and print name of that employee.
*/

struct employee
{
    char name[20];
    int salary;
};
int main()
{
    struct employee e1 = {"abc",120};
    struct employee e2 = {"def",125};
    struct employee e3 = {"ghi",130};

    if(e1.salary>=e2.salary&&e1.salary>=e3.salary)
        printf("%s %d",e1.name,e1.salary);
    else if(e2.salary>=e1.salary&&e2.salary>=e3.salary)
        printf("%s %d",e2.name,e2.salary);
    else
        printf("%s %d",e3.name,e3.salary);
}

