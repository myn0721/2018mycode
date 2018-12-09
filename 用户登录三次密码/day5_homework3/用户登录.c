#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char psw[10] = {0};
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("ÇëÊäÈëÃÜÂë:");
		scanf("%s", &psw);
		
		if (strcmp(psw,"123456")==0)
		{
			printf("ÃÜÂëÕýÈ·£¬µÇÂ¼³É¹¦!\n");
			
		}
		else
		{
			printf("ÃÜÂë´íÎó£¬ÇëÖØÐÂÊäÈë!\n");
		}
	}
	if (i == 3)
	{
		printf("Èý´ÎÃÜÂë´íÎó£¬ÍË³ö³ÌÐò\n");
	}
	system("pause");
	return 0;
}