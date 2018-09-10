#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
	int a, i, sum=0;
	scanf("%d", &a);
	char N[a];
	scanf("%s", &N[0]);
	for (i=1; i<=a/2; i++){
		if (N[i]==N[i+1])
			sum+=1;
	}
	printf("%d", sum);
	return 0;
}
