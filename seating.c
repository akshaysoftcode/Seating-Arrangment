#include <stdio.h>

int main() {
	int t,n,p,i,x;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%d",&n);
		p=n%12;
		if(p==1)
		{
			x= n+11;
			printf("%d WS\n",x);
		}
		else if(p==2)
		{
			x= n+9;
			printf("%d MS\n",x);
		}
		else if(p==3)
		{
			x= n+7;
			printf("%d AS\n",x);
		}
		else if(p==4)
		{
			x= n+5;
			printf("%d AS\n",x);
		}
		else if(p==5)
		{
			x= n+3;
			printf("%d MS\n",x);
		}
		else if(p==6)
		{
			x= n+1;
			printf("%d WS\n",x);
		}
		else if(p==7)
		{
			x= n-1;
			printf("%d WS\n",x);
		}
		else if(p==8)
		{
			x= n-3;
			printf("%d MS\n",x);
		}
		else if(p==9)
		{
			 x= n-5;
			printf("%d AS\n",x);
		}
		else if(p==10)
		{
			x= n-7;
			printf("%d AS\n",x);
			}
		else if(p==11)
		{
			x= n-9;
			printf("%d MS\n",x);
		}
		else if (p==12 || p==0)
		{
			 x= n-11;
			 printf("%d WS\n",x);
		}

	}
return 0;
}
