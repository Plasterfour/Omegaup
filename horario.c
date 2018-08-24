#include <stdio.h>

int main(int argc, char *argv[]) {
	int a,b,c,d,t,tm;
	scanf("%i%i%i%i",&a,&b,&c,&d);
	
	if(a<=12)
	{
		t=c-a;
		tm=d-b;
		if(tm>60)
		{
		t=t+1;
		tm=60-tm;
		}
		printf("%i \n%i",t,tm);
		
	}else if (a>12)
	{
		if(c>12)
		{
		t=((12-a)+c)-a;
		
		if(b==0&&d==0)
		{
			tm=0;
		} else
		   {
			tm=(60-b)+d;
		}
			if(tm>60)
			{
				t=t+1;
				tm=60-tm;
			}
			printf("%i \n%i",t,tm);
			
		}else if(c<12)
		{
			t=((24-a)+c);
				
				if(b==0&&d==0)
			{
				tm=0;
			}else 
				{
					tm=(60-b)+d;
				}
			if(tm>60)
			{
				t=t+1;
				tm=60-tm;
			}
		}
		printf("%i \n%i",t,tm);
	}
	return 0;
}

