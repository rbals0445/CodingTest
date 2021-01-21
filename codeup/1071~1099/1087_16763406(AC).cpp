#include<cstdio>
typedef long long ll;
int main()
{
	ll size,sum = 0;
	scanf("%lld",&size);
	for(ll i = 1;; i++){
		if(sum >= size)
		{
			printf("%lld",sum);
			break;
		}else
			sum += i;
	}
	
	return 0;
 } 
