#include <stdio.h>

int main(int argc, char *argv[]) {
	int a,b;
	scanf("%i %i",&a,&b);
	if(b%2!=0){
		printf("tristemil");
	}
	if (a%2==b){
		printf("felizmil");
	}
	return 0;
}

