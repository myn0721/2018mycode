#define _CRT_SECURE_NO_WARNINGS 1


#include "game.h"


void menu()
{
	printf("**************************************\n");
	printf("*************  1.play ****************\n");
	printf("*************  0.exit ****************\n");
	printf("**************************************\n");//��Ϸ�˵�
}

void game()
{
	char board[ROW][COL] = { 0 };
	char ret = 0;//����һ������ֵret
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	while (1)//����ѭ������Ϸһֱ������ȥ
	{
		PlayerMove(board, ROW, COL);//�����
		ret = IsWin(board, ROW, COL);//��һ���ж�һ����Ӯ
		if (ret != ' ')//ͨ������ֵ��Ϊ������ѭ��
			break;
		DisplayBoard(board, ROW, COL);//��ӡ������ߵĽ��
		ComputerMove(board, ROW, COL);//������
		ret = IsWin(board, ROW, COL);
		if (ret != ' ')
			break;
		DisplayBoard(board, ROW, COL);//��ӡ�����ߵĽ��
	}
	if (ret == 'X')
		printf("���Ӯ\n");
	else if (ret == '*')
		printf("����Ӯ\n");
	else if (ret == 'Q')
		printf("ƽ��\n");
	DisplayBoard(board, ROW, COL);
}
//void test()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����!\n");
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
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ!\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);

	system("pause");
	return 0;
}