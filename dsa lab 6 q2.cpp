#include<iostream>
using namespace std;
#define N 4
int totalWays(int arr[N][N],int row,int col)
{
	if(row>=N||col>=N)
	{
	return 0;
    }
    if(row==N-1&&col==N-1)
	{
		return 1;
	}
	if(arr[row][col]==0)
	{
		return 0;
	}
	int forward=totalWays(arr,row,col+1);
	int down=totalWays(arr,row+1,col);
	return forward+down;
}
int main()
{
	int arr[N][N]={1,0,0,0
	             ,1,1,0,1,
	             0,1,0,0,
	             1,1,1,1};
	int moves=totalWays(arr,0,0);
	cout<<"the total moves are:"<<moves;
}
