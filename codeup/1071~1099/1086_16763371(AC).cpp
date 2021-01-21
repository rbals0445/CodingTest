#include<cstdio>
typedef long long ll;
int main()
{
	ll h,b,c,s;
	scanf("%lld %lld %lld",&h,&b,&c);
	printf("%.2lf MB\n",(h*b*c)/(double)(1<<23));
	
	return 0;
 } 
