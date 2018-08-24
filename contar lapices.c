#include <stdio.h>

int main(int argc, char *argv[]) {
	int a,b,i,c=0;
	int x[50];
	scanf("%i%i",&a,&b);
	for(i=0;i<a;i++)
	{
		scanf("%i",&x[i]);
		if(x[i]==b)
		{
			c++;
		}
	}
	printf("%i",c);
	return 0;
}

