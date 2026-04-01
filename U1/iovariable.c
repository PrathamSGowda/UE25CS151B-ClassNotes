#include <stdio.h>
#include <limits.h>
#include <float.h>
int main()
{
	// This is a comment
	printf("Hello World!\n");

	// variable and datatype

	int a; // variable declaration
	// printf("%d\n",a);

	a = 10; // variable initialization
	// printf("%d\n",a);
	// printf("%5d\n",a);

	int b = 20; // variable declaration and initialization
	// printf("%d %d\n",a,b);
	// printf("%d\n%d\n",a,b);
	// printf("%d\t%d\n",a,b);

	// float k = 67.67;
	// printf("%f\n",k);
	// printf("%.2f\n",k);
	// printf("%2.2f\n",k);
	// printf("%6.2f\n",k);

	// char p = 'P';
	// printf("%c\n",p);
	// printf("%d\n",p); // ASCII value

	// sizeof
	// printf("%d %d %d %d \n",sizeof(int),sizeof(long),sizeof(float),sizeof(char));
	
	//printf("%d %d\n", INT_MAX,INT_MIN);
	//printf("%d %d\n", SHRT_MAX,SHRT_MIN);
	//printf("%d %d\n", LONG_MAX,LONG_MIN);
	//printf("%d %d\n", CHAR_MAX,CHAR_MIN);
	//printf("%g %g\n", FLT_MAX,FLT_MIN);	
	//printf("%g %g\n", DBL_MAX,DBL_MIN);
	
	//printf("Hello\n", "world"); // Hello
	//printf("Hello %s \n","world"); // Hello world
	//printf("%s %s %s\n","red","green","blue"); // red green blue
	//printf("%s %s\n","red","green","blue"); // red green
	//printf("%s %s %s %s\n","red","green","blue"); //red green blue GARBAGE_VALUE

	// print function returning integer value
	// int n;
	// n = printf("one\n");
	// printf("%d\n",n);

	// format specifiers
	//printf("\a");
	//printf("hello\tworld\n"); \\hello 	world
	//printf("hello\rhi\n"); \\hillo
	//printf("abc\bd\n"); \\abd
	//printf("It\'s ok\n"); \\It's ok
	//printf("c:\\mingw\\"); \\c:\mingw\

	//scanf
	//int c;
	//scanf("%d",c); // undefined behaviour
	//scanf("%d",&c);
	//scanf("%d %d",&a,&b);
	//printf("%d %d\n",a,b);

// addition of 2 numbers
	int p,q,r;
	scanf("%d %d",&p,&q);
	r = p+q;
	printf("%d\n",r);
	
	return 0;
}