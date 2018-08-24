#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[]) {
	int a,b,c,i,j,con=0;
	scanf("%i %i",&a,&b);
	for(i=a;i<=b;i++){
		for(j=a;j<=b;j++){
			for(c=a;c<=b;c++){
				if(pow(i,2)+pow(j,2)==pow(c,2))
					con++;
			}
		}
	}
	printf("%i",con/2);
	return 0;
}
