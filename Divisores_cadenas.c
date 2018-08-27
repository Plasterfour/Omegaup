#include <stdio.h>

int main(int argc, char *argv[]) {
	char b[255];
	int a=0,i,co=0,e,n;
	
	fflush(stdin);
	scanf("%[^\n]",&b[a]);
	for(i=0;b[i]!='\0';i++){
		if(b[i]>=97&& b[i]<=122)
	{
		b[i]=b[i]-32;
	}
		co+=b[i];
	}
	e=0;
	n=0;
	i=0;
while(n!=10)
{
	n++;
	i++;
	if(co%i==0)
	{
		e++;
	}
}
	printf("%i ",e*2);
	return 0;
}

