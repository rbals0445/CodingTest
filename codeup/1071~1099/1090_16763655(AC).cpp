#include<cstdio>
#include<cmath>
typedef long long ll;
int main()
{
	ll a,d,n;
	scanf("%lld %lld %lld",&a,&d,&n);
	
	printf("%lld",a*(ll)pow((double)d,(double)n-1));
	
	return 0;
 } 
