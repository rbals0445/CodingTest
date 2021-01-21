#include<cstdio>
typedef long long ll;
int main()
{
	int a,b;

	scanf("%x",&a);
	for(int i = 1; i < 16; i++)
		printf("%X*%X=%X\n",a,i,a*i);
	
	return 0;
 } 
