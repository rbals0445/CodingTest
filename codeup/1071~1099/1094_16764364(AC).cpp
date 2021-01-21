#include<cstdio>
#include<cmath>
#include<stack>
typedef long long ll;
using namespace std;
int main()
{
	stack<int> s;	
	int size,n;
	scanf("%d",&size);
	for(int i = 0; i < size; i++)
	{
		scanf("%d",&n);
		s.push(n);
	}
	for(int i = 0; i < size; i++)
	{
		printf("%d ",s.top()); s.pop();
	}
	
	
	return 0;
 } 
