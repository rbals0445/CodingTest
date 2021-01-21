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
	

	
	for(int i = 1; i < 20; i++)
	{
		for(int j = 1; j < 20; j++)
		{
			scanf("%d",&board[i][j]);
		}
	}
	scanf("%d",&size);
	
	for(int i = 0; i < size; i++)
	{
		scanf("%d %d",&x,&y);
		
		for(int j = 1; j < 20; j++)
		{
			if(board[x][j]) board[x][j] = 0;
			else board[x][j] = 1;
		}
		
		for(int j = 1; j < 20; j++)
		{
			if(board[j][y]) board[j][y] = 0;
			else board[j][y] = 1;
		}
		
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
