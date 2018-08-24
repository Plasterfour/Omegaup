#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	int a,aux,co,i,c,d;
	scanf("%d",&a);
	int *b=malloc(a*sizeof(int));
	for(i=0;i<a;i++){
		scanf("%d",&b[i]);
	}
	d=b[0];
	for(i=0;i<a;i++){
		for(c=0;c<a-1;c++){
			if((b[c]>b[c+1])){
				aux=b[c];
				b[c]=b[c+1];
				b[c+1]=aux;
				if(b[c+1]==d)
					co=c+1;
			}
		}
	}
	printf("%d",co);
	
	return 0;
}
