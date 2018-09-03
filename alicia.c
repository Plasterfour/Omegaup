#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
int a,b,j,i,co=0;
scanf("%d",&a);
int *a2=malloc(a*sizeof(int));
for(i=1;i<=a;i++)
	scanf("%d",&a2[i]);

printf("\n");

	scanf("%d ",&b);
	int *b2=malloc(b*sizeof(int));
for(i=0;i<b;i++)
{
	scanf("%d",&b2[i]);
}
	for(i=0;i<b;i++){
	co=0;
	for(j=1;j<=a;j++)
	{
		if(b2[i]==a2[j])
		{
			printf("%d ",j);
			co++;
		}
	}
	if(co==0)
	printf("0 ");
	}
	

	

	return 0;
}

