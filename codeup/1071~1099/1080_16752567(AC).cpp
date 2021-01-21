#include<cstdio>
typedef long long ll;
int main()
{
	int n,sum=0,index=1;
	scanf("%d",&n);
	while(sum < n)
	{
		sum += index;
		index++;
	}
	printf("%d",--index);
	
	return 0;
 } 
