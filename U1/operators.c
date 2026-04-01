#include <stdio.h>
int main()
{
	// arithmetic operators +,-,*,/,%
	// if both the operands are int then output is int
	// if any one operand is float then output is float
	// if both the operands are float then output is float

	// printf("%d %f %f %f\n",2+3,2.0+3,2+3.0,2.0+3.0);
	// printf("%d %f %f %f\n",2-3,2.0-3,2-3.0,2.0-3.0);
	// printf("%d %f %f %f\n",2*3,2.0*3,2*3.0,2.0*3.0);
	// printf("%d %f %f %f\n",2/3,2.0/3,2/3.0,2.0/3.0);
	// int a = 12%5;
	// printf("%d\n",12%5);
	// printf("%f\n",(float)a);

	// unary operator +,-,++,--
	// ++ preincrement and postincrement
	// -- predecrement and postdecrement

	// int b = 24;
	// int c;
	// int d;
	// printf("%d\n",b); // 24
	// printf("%p\n",&b); // address of b
	// printf("%d\n",b++); // 24 --> b=b+1 --> b = 25
	// printf("%p\n",&b); // address of b remains the same
	// printf("%d\n",b); // 25
	// printf("%d\n",++b); // 26

	// c = b--;
	// printf("%d %d\n",c,b); // 24 23
	// d = --b;
	// printf("%d %d\n",d,b); // 22 22

	// relational or conditional operator <,<-,>,>=,==,!=
	// printf("%d %d %d %d %d %d\n",(2>3),(5<6),(6<=6),(8>=5),(4==3),(1!=2));

	// logical operator &&(and) ||(or) !(not)
	// int e = 4;
	// int f = 3;
	// int g = 7;
	// printf("%d\n",(e<f)&&(f<g));
	// printf("%d\n",(e<f)||(f<g));
	// printf("%d\n",!(f<g));

	// bitwise operators &(and) |(or) ^(xor) ~(not) << left shift , >> right shift
	// printf("%d\n",4&2);
	// printf("%d\n",4|2);
	// printf("%d\n",4^2);
	// printf("%d\n",~4);
	// printf("%d\n",4<<2); 
	// printf("%d\n",4>>2);

	/* << left shift converts the number into hexadecimal and shifts it to left by the 	value to the right of the operator. For every left shift the number doubles */

	/* >> right shift converts the number into hexadecimal and shifts it to right by 	the value to the right of the operator. For every right shift the number halves */

	// assignment operator +=, -=, *=, /=, %= etc
	
	/*
	ternary operator :
		ternary exp ? exec statement if exp true : exec statement if exp false
	*/
	// int h = 6;
	// int i = 7;
	// (h>i) ? printf("h is greater") : printf("i is greater");

	/* Precedence and Associativity
	
	1. (), [] , ->, . (left to right)
	2. ++, --, ~, !, +, - unary (type), & (right to left)
	3. *, /, % (left to right)
	4. +, - (left to right)
	5. >>, << (left to right)
	6. <, <=, >, >= (left to right)
	7. ==, != (left to right)
	8. & (left to right)
	9. ^ (left to right)
	10. | (left to right)
	11. && (left to right)
	12. || (left to right)
	13. ?: (right to left)
	14. =, +=, -=, *=, /=, %= etc (right to left)

	*/

	

return 0;
}