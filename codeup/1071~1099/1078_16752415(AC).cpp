﻿#include<cstdio>
typedef long long ll;
int main()
{
	int a;
	int sum = 0;
	scanf("%d",&a);
	for(int i = 1; i <= a; i++)
	{
		if( i % 2 == 0 )
		{
			sum += i;
		}
		
	}
	printf("%d",sum);
	
	return 0;
 } 
