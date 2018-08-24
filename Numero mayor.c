#include <stdio.h>
int main(int argc, char *argv[]) {
	int a,b,c;
	scanf("%i %i %i",&a,&b,&c);
	if (a>c&&a>b){
		printf("El numero mayor es %i",a);
	}if(b>a&&b>c){
		printf(" El numero mayor es %i",b);
	}if(c>b&&c>a){
		printf(" El numero mayor es %i",c);
	}
	return 0;
}

