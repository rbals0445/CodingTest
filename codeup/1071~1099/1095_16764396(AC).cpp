#include<cstdio>
#include<cmath>
#include<stack>
typedef long long ll;
using namespace std;
int main()
{
	int arr[24];
	int size,n;
	int min = 99;
	scanf("%d",&size);
	for(int i = 0; i < size; i++)
	{
		scanf("%d",&n);
		if(min > n)
			min = n;
	}
	printf("%d\n",min);
	
	
	return 0;
 } 
