#include<cstdio>
#include<cmath>
#include<stack>
typedef long long ll;
using namespace std;
int main()
{
	int board[101][101] = {0,};
	int s_x,s_y,size;
	int l,d,x,y;
	scanf("%d %d",&s_x,&s_y);
	scanf("%d",&size);
	
	for(int i = 0; i < size; i++)
	{
		scanf("%d %d %d %d",&l,&d,&x,&y);
		if(d==0){
			for(int j = 0; j < l; j++)
			{
				board[x][y+j] = 1;
			}
		}else{
			for(int j = 0; j < l; j++)
			{
				board[x+j][y] = 1;
			}
		}
		
	}
	
	for(int i = 1; i <= s_x; i++)
	{
		for(int j = 1; j <= s_y; j++)
		{
			printf("%d ",board[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
 } 
