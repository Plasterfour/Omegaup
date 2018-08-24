#include <stdio.h>
int main(int argc, char *argv[]) {
	int a,b,c,t1,t;
	scanf("%i %i %i",&a,&b,&c);
	t1=(a+b+c)/3;
	if (t1>5){
		t=1;
	}else{
		t=0;
	}
	printf("%i",t);
	return 0;
}

