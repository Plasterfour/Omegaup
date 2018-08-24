#include <stdio.h>

int main(int argc, char *argv[]) {
	int a,b,c,e,f,g,t1,t2;
	scanf("%i%i%i%i%i%i",&a,&b,&c,&e,&f,&g);
	t1=a*b*c;
	t2=e*f*g;
	if(t1<=t2&&t1){
		printf("\n1");
	}
	else{
		printf("\n0");
	}
	
	return 0;
}

