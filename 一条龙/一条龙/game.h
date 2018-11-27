
#ifndef __GAME_H__
#define __GAME_H__

#include <time.h>
#include<stdio.h>
#include <stdlib.h>
#include<time.h>

#define ROW 3//棋盘的行数
#define COL 3//棋盘的列数


void InitBoard(char board[ROW][COL], int row, int col);//初始化棋盘函数
void DisplayBoard(char board[ROW][COL], int row, int col);//打印棋盘函数
void PlayerMove(char board[ROW][COL], int row, int col);//玩家走函数
void ComputerMove(char board[ROW][COL], int row, int col);//电脑走函数

char IsWin(char board[ROW][COL], int row, int col);//判断输赢函数

#endif //__GAME_H__