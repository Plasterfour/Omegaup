#include <stdio.h>

int main(int argc, char *argv[]) {
	int a,b,c;
	scanf("%i %i %i",&a,&b,&c);
	if((a+b+c)!=180)
	{
		printf("ERROR");
	}
	else if(a==b&&a==c)
	{
		printf("EQUILATERO");
	}
else if(a!=b&&a!=c&&b!=c)
   {
	printf("ESCALENO");
   }
else if(a==b||a==c||b==c)
{
	printf("ISOSCELES");
}
	return 0;
}

