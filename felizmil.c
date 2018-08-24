#include <stdio.h>

int main(int argc, char *argv[]) {
int a,b;
scanf("%i %i",&a,&b);
if (a>b){
b=b*2;
	if(b==a){
		printf("felizmil");
			}else{
				printf("tristemil");
				}
} else
{
	a=a*2;
	if(a==b){
		printf("felizmil");
	}else
	   {
		printf("tristemil");
	}
}
	return 0;
}

