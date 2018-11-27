#define _CRT_SECURE_NO_WARNINGS 1


#include "game.h"


void menu()
{
	printf("**************************************\n");
	printf("*************  1.play ****************\n");
	printf("*************  0.exit ****************\n");
	printf("**************************************\n");//游戏菜单
}

void game()
{
	char board[ROW][COL] = { 0 };
	char ret = 0;//定义一个返回值ret
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	while (1)//用死循环让游戏一直进行下去
	{
		PlayerMove(board, ROW, COL);//玩家走
		ret = IsWin(board, ROW, COL);//走一次判断一次输赢
		if (ret != ' ')//通过返回值不为空跳出循环
			break;
		DisplayBoard(board, ROW, COL);//打印出玩家走的结果
		ComputerMove(board, ROW, COL);//电脑走
		ret = IsWin(board, ROW, COL);
		if (ret != ' ')
			break;
		DisplayBoard(board, ROW, COL);//打印电脑走的结果
	}
	if (ret == 'X')
		printf("玩家赢\n");
	else if (ret == '*')
		printf("电脑赢\n");
	else if (ret == 'Q')
		printf("平局\n");
	DisplayBoard(board, ROW, COL);
}
//void test()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误!\n");
//			break;
//		}
//	} while (input);
//}
//
//int main()
//{
//	test();
//	return 0;
//}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏!\n");
			break;
		default:
			printf("选择错误，请重新选择！\n");
			break;
		}
	} while (input);

	system("pause");
	return 0;
}