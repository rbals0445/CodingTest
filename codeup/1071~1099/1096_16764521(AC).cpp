#include<cstdio>
#include<cmath>
#include<stack>
typedef long long ll;
using namespace std;
int main()
{
	int board[20][20]={0,};
	int size;
	int x,y;
	scanf("%d",&size);
	
	for(int i = 0; i < size; i++)
	{
		scanf("%d %d",&x,&y);
		if(!board[x][y])
			board[x][y]++;
	}
	
	for(int i = 1; i < 20; i++)
	{
		for(int j = 1; j < 20; j++)
		{
			printf("%d ",board[i][j]);
		}
		printf("\n");
	}
	
	return 0;
 } 
