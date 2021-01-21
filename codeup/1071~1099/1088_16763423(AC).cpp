#include<cstdio>
typedef long long ll;
int main()
{
	ll size,sum = 0;
	scanf("%lld",&size);
	for(ll i = 1;; i++){
		if(i >= size)
		{
			printf("%lld",i);
			break;
		}else
			if(i % 3 == 0)
				continue;
			else printf("%d ",i);
		
				
	}
	
	return 0;
 } 
