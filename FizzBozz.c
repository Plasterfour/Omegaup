#include <stdio.h>

int main(int argc, char *argv[]) {
	int x[100];
	int a,i;
	scanf("%i",&a);
	for(i=0;i<a;i++)
	{
		scanf("%i",&x[i]);
	}
	for(i=0;i<a;i++)
	{
	if((x[i]%3==0) && (x[i]%5==0))
	{
		printf("FizzBozz\n");
	}else if ((x[i]%3!=0) && (x[i]!=5))
	{
		printf("NoFizzBozz\n");
	}else if (x[i]%3==0)
	{
		printf("Fizz\n");
	}else if(x[i]%5==0)
	{
		printf("Bozz\n");
	}
	}
	return 0;
}

