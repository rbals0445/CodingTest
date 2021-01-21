#include<cstdio>
typedef long long ll;
int main()
{
	ll h,b,c,s;
	scanf("%lld %lld %lld %lld",&h,&b,&c,&s);
	printf("%.1lf MB\n",(h*b*c*s)/(double)(1024*1024*8));
	
	return 0;
 } 
