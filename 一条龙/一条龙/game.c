#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"




void InitBoard(char board[ROW][COL], int row, int col)//定义一个二位数初始化函数
{
	int i = 0;
	int j = 0;
	for (i = 0; i<row; i++)
	{
		for (j = 0; j<col; j++)
		{
			board[i][j] = ' ';//两层for循环遍历二维数组中的每一个数并赋为‘ ’
		}
	}
	//memset(&board[0][0], ' ', row*col*sizeof(board[0][0]));
}

void DisplayBoard(char board[ROW][COL], int row, int col)//定义一个二维数组输出函数
{
	int i = 0;
	int j = 0;
	for (i = 0; i<row; i++)
	{
		//printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);有局限性，游戏无法扩展
		for (j = 0; j<col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j<col - 1)
				printf("|");//打印数据行
		}
		printf("\n");
		if (i<row - 1)
		{
			//printf("---|---|---\n");
			for (j = 0; j<col; j++)
			{
				printf("---");
				if (j<col - 1)
					printf("|");//打印分割行
			}
			printf("\n");
		}
	}
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;  //定义两个坐标变量
	int y = 0;
	printf("玩家走:>\n");//提示玩家走

	while (1)
	{
		printf("请输入走的坐标(1-3):>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)//判断输入坐标的合法性，且游戏面向大众坐标从1开始
		{
			if (board[x - 1][y - 1] == ' ')//数组坐标从0开始，若为空格则可落子
			{
				board[x - 1][y - 1] = 'X';
				break;//只有输入正确时才能跳出while(1)的死循环
			}
			else
			{
				printf("坐标被占用，重新输入!\n");//游戏规则：已经有子则重新输入
			}
		}
		else
		{
			printf("坐标有误，重新输入!\n");
		}
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑走:>\n");//提示电脑走

	while (1)
	{
		x = rand() % row;//rand()的范围0-32767，取余行列从而随机生成坐标；rand()需要调用srand()函数
		y = rand() % col;
		if (board[x][y] == ' ')//判断是否被占用
		{
			board[x][y] = '*';
			break;
		}
	}
}

static int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i<row; i++)
	{
		for (j = 0; j<col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}

char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i<row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2]
			&& board[i][0] != ' ')
		{
			return board[i][0];
		}
	}
	for (i = 0; i<col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i]
			&& board[0][i] != ' ')
		{
			return board[0][i];
		}
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2]
		&& board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0]
		&& board[1][1] != ' ')
	{
		return board[1][1];
	}

	//判断平局
	if (IsFull(board, row, col) == 1)
	{
		return 'Q';
	}

	//游戏继续
	return ' ';
}