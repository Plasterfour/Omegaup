#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int b,c,co=0,i;
	int a[1000];
	scanf("%i%i",&b,&c);
	for(i=0;i<c;i++){
		scanf("%i",&a[i]);
	}
	a[c]=a[0];
	for(i=0;i<c;i++){
		if((a[i]+a[i+1])%b==0)
			co++;
	}
	printf("%i",co);
	return 0;
}
