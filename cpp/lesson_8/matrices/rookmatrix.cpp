#include <iostream>
#include <vector>
#include <string>
using namespace std;

//make matrix called chessboard(char), functions: placeKing(set position of king), placeRook(set position of rook) 
//, kingCheck(check to see if king is in check, printBoard(print the board), buildBoard(x,y)

//helper for kingcheck

vector<int> findrooks(const vector<vector<char>> &board)
{
	for(int i = 0; i < board.size(); i++)
	{
		for(int j = 0; j < board[i].size(); j++)
		{
			if(board[i][j] == 'R')
			{
				return {i, j};
			}
		}
	}
	return {};
}

vector<int> findking(const vector<vector<char>> &board)
{
	for(int i = 0; i < board.size(); i++)
	{
		for(int j = 0; j < board[i].size(); j++)
		{
			if(board[i][j] == 'K')
			{
				return {i, j};
			}
		}
	}
	return {};
}



void buildBoard(vector<vector<char>> &board, int x, int y)
{
	for(int i = 0; i < y; i++)
	{
		vector<char> temp;
		for(int j = 0; j < x; j++)
		{
			temp.push_back('_');
		}
		board.push_back(temp);
	}
}

//helper for place functions

bool outofbounds(vector<vector<char>> &board, int x, int y)
{
	//check if there's a board
	if(board.size() == 0)
	{
		return true;
	}
	//check if points are out of bounds
	else if(x > board[0].size() || y > board.size())
	{
		return true;
	}
	//check if points are negative
	else if(x < 0 || y < 0)
	{
		return true;
	}
	return false;
}

void placeKing(vector<vector<char>> &board, int x, int y)
{
	if(outofbounds(board, x, y))
	{
		cout << "Out of bounds." << endl;
		return;
	}
	vector<int> kingpos = findking(board);
	if(!kingpos.empty())
	{
		board[kingpos[1]][kingpos[0]] = '_';
	}
	board[y][x] = 'K';
}

void placeRook(vector<vector<char>> &board, int x, int y)
{
	if(outofbounds(board, x, y))
	{
		cout << "Out of bounds." << endl;
		return;
	}
	vector<int> rookpos = findrooks(board);
	if(!rookpos.empty())
	{
		board[rookpos[1]][rookpos[0]] = '_';
	}
	board[y][x] = 'R';
}

bool kingCheck(const vector<vector<char>> &board)
{
	vector<int> rook = findrooks(board);
	vector<int> king = findking(board);
	if(rook.empty() || king.empty())
	{
		return false;
	}
	if(king[0] == rook[0] || king[1] == rook[1])
	{
		return true;	
	}
	return false;
}

void printBoard(const vector<vector<char>> &board)
{
	for(int i = 0; i < board.size(); i++)
	{
		for(int j = 0; j < board[i].size(); j++)
		{
			cout << board[i][j];
		}
		cout << endl;
	}
}

bool kingCheck2(const vector<vector<char>> &board)
{
	vector<int> rookcoor = findrooks(board);
	recursiveKingCheck(board, rookcoor[0], rook[1]);
}

bool recursiveKingCheck(const vector<vector<char>> &board, int row, int column)
{
	//4 diff rec calls, directions
	//out of bounds, on top of king
	if(outofbounds(board, row, column))
	{
		return false;
	} 
	else if(board[row][column] == 'K')
	{
		return true;
	}
	if(recursiveKingCheck(board,row+1,column))
	{
		return true;
	}
	else if(recursiveKingCheck(board,row-1,column))
	{
		return true;
	}
	else if(recursiveKingCheck(board,row,column+1))
	{
		return true;
	}
	else if(recursiveKingCheck(board,row,column-1))
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	vector<vector<char>> chessboard;
	buildBoard(chessboard, 8, 8);
	placeKing(chessboard, 0, 5);
	placeRook(chessboard, 5, 5);
	cout << kingCheck(chessboard) << endl;
	printBoard(chessboard);
}
