#include<cstdio>
#include<cmath>
typedef long long ll;
int main()
{
	int arr[24]={0,},size,cnt;
	
	scanf("%d",&size);
	for(int i = 0; i < size; i++)
	{
		scanf("%d",&cnt);
		arr[cnt]++;
	}
	for(int i = 1; i < 24; i++)
	{
		printf("%d ",arr[i]);
	}
	
	return 0;
 } 
