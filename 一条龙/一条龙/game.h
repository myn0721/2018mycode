
#ifndef __GAME_H__
#define __GAME_H__

#include <time.h>
#include<stdio.h>
#include <stdlib.h>
#include<time.h>

#define ROW 3//���̵�����
#define COL 3//���̵�����


void InitBoard(char board[ROW][COL], int row, int col);//��ʼ�����̺���
void DisplayBoard(char board[ROW][COL], int row, int col);//��ӡ���̺���
void PlayerMove(char board[ROW][COL], int row, int col);//����ߺ���
void ComputerMove(char board[ROW][COL], int row, int col);//�����ߺ���

char IsWin(char board[ROW][COL], int row, int col);//�ж���Ӯ����

#endif //__GAME_H__