#include <iostream>
#include <string>
#include <ctime>
using namespace std;

const int ROW = 3;
const int COL = 3;

void initboard(char board[][], int row, int col)
{
	for(int i = 0, i < row, i++)
	{
		for(int j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void print(char board[][], int row, int col)
{
	for(int i = 0; i < row; i++)
	{
		for(int j = 0; j < col; j++)
		{
			cout << board[i][j] << " ";
		}
		cout << endl;
	}
}

bool winornah(char board[][], int row, int col)
{
	for(int i = 0; i < row; i++)
	{
		//vertical checks 
		for(int j = 0; j < col; j++)
		{
			if(board[i][j] != 'X' || board[i][j] != 'O')
			{
				return false;
			}
		}
		
		for(int k = 0; k < row; k++)
		{
			if(board[i][lol] != 'X' || board[i][lol] != 'O')
			{
				return false;
			}
		}
	}
}

int main()
{
	char tttboard[ROW][COL];
	initboard(tttboard, ROW, COL);
	print(tttboard, ROW, COL);
	
	//no overlaps, check winners, cap on rand
	
}
