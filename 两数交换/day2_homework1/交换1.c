#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 0;
	int b = 0;
	//int temp = 0;
	scanf("%d %d", &a, &b);
	/*a = a + b;
	b = a - b;
	a = a - b;*///����1�����õ���������
	/*temp = a;
	a = b;
	b = temp;*///����2����������������
	a = a^b;
	b = b^a;
	a = a^b;//����3��������������
	printf("������a=%d b=%d\n", a, b);
	system("pause");
	return 0;

}