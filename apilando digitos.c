#include <stdio.h>

int main(int argc, char *argv[]) {
	int j,t,e,d,i;
	
	scanf("%d",&d);
	j=0;
	t=0;
	e=d;
	while(j<d)
	{
		t++;
		for(i=1;i<=t;i++)
			printf("%i",j+1);
		printf("\n");
		j++;
		e--;
	}
	e++;
	while(j>=0)
	{
		t--;
		for(i=1;i<=t;i++)
			printf("%i",j-1);
		printf("\n");
		j--;
		e++;
	}
	return 0;
}

