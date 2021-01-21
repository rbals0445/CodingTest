#include<cstdio>
#include<cmath>
#include<stack>
typedef long long ll;
using namespace std;
int main()
{
	int board[11][11] = {0,};
	int i,j;
	int x=1,y=1;
	
	
	
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			scanf("%d",&board[i][j]);
		}
	}
	
	if(board[x][y] == 2){
		board[x][y] = 9;
		for(i=0;i<10;i++)
		{
			for(j=0;j<10;j++){
				printf("%d ",board[i][j]);
			}	
			printf("\n");
		}
		return 0;
	}
	else{
		board[x][y] = 9;
	}
	
	while(1)
	{
		
		
		if( board[x][y+1] == 0  ){
		
			board[x][y+1] = 9;
			y++;
		}
		else if( board[x][y+1] == 2){
			board[x][y+1] = 9;
			break;
		}
		else if( x==9 && y==9)
			break;
		else{
			if(board[x+1][y] == 0){
			
				board[x+1][y] = 9;
				x++;
			}
			else if( board[x+1][y] == 2){
				board[x+1][y] =9;
				break;
			}else{
				break;
			}
		}
		
			
	}	
	
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++){
			printf("%d ",board[i][j]);
		}	
		printf("\n");
	}
	
	return 0;
 } 
