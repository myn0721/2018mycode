#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ�
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
int DigitSum(int n)
{
	if (n > 9)
	{
		return n % 10 + DigitSum(n / 10);
	}
	return n;

}
int main()
{
	int n = 0;
	printf("������һ������n:>");
	scanf("%d\n",&n);
	int sum = DigitSum(n);
	printf("%d\n",sum);
	system("pause");
	return 0;
}