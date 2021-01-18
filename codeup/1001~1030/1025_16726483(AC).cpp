#include<cstdio>

int main()
{
	int d,i=10000;
	scanf("%d",&d);
	while(d%10){
		printf("[%d]\n",d-(d%i));
		d%=i;
		i/=10;
		
	}
 } 
