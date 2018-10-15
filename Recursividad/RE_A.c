#include <stdio.h>
int factorial(int n);
int main(int argc, char *argv[]) {
	int n;
	scanf("%d",&n);
	//factorial(n);
	printf("%d",factorial(n));
	return 0;
}

int factorial(int n)
{
	if(n<5)
	{
		return 1;
	}else
	{
		return factorial(n-2)*5;
	}
}
