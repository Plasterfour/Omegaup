#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a[100];
	int b[100];
	int n,co=0,d,i;
	scanf("%i",&n);
	d=n-1;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		b[d]=a[i];
		d=d-1;
	}
	for(i=0;i<n;i++){
		if(a[i]==b[i])
			co++;
	}
	if(co==n)
		printf("SI");
	else
		printf("NO");
	return 0;
}
