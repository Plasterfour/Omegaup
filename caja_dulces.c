#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	int a,i,c,sum,aux=0,j;
	int b[1000];
	scanf("%i %i",&a,&c);
	for(i=0;i<a;i++){
		scanf("%i",&b[i]);
	}
	for(i=0;i<a-c;i++){
		sum=0;
		for(j=0;j<c;j++){
			sum+=b[i+j];
		}
		if(sum>aux){
			aux=sum;
		}
	}
	printf("%i",aux);
	return 0;
}
