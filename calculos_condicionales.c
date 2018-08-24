#include <stdio.h>

int main(int argc, char *argv[]) {
	int a,b=0;
	scanf("%i",&a);
	if(a>99){
		a=a/100;
		++b;
		if(a%2!=0){
			a=a+1;
			++b;
			printf("%i %i",a,b);
			}else
			{
				a=a/2;
				++b;
				printf("%i %i",a,b);
			}

	}
	if(a<=99&&a>9){
		a=a/10;
		++b;
		if(a%2!=0){
			a=a+1;
			++b;
			printf("%i %i",a,b);
		}else
		{
			a=a/2;
			++b;
			printf("%i %i",a,b);
		}
	}
	if (a<10){
		if(a%2!=0){
			a=a+1;
			++b;
			printf("%i %i",a,b);
		}else
		{
			a=a/2;
			++b;
			printf("%i %i",a,b);
		}
	}
	return 0;
}

