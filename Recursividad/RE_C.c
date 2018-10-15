#include <stdio.h>
int mcd();
int main(int argc, char *argv[]) {
	int a,b;
	scanf("%d %d",&a,&b);
	int res=mcd(a,b);
	printf("%d",res);
	return 0;
}
int mcd(int a,int b){
	int res=1;
	for(int i=1;i<a;i++)
	{
		if((a%i==0)&&(b%i==0))
		{
			res=i;
		}
	}
	return res;
}
