#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	printf("%d\n",argc);
	int i; int sum = 0;
	/*
	for(i=0;i<argc;i++)
		printf("%s\n",argv[i]);
	*/
	printf("sum = %d\n",atoi(argv[1])+atoi(argv[2]));
	for(i=0;i<argc;i++)
		sum = sum+atoi(argv[i]);
	printf("sum = %d\n",sum);
	return 0;
}