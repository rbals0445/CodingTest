#include<cstdio>
#include<cmath>
typedef long long ll;
int main()
{
	ll a,m,d,res = 1;
	scanf("%lld %lld %lld",&a,&m,&d);
	
	while(!(res % a == 0 && res % m ==0 && res % d == 0)) res++;
	printf("%lld",res);
	
	
	return 0;
 } 
