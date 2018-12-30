#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int murder = 0;
	for (murder = 'A'; murder <= 'D'; murder++)
	{
		{
			if (((murder != 'A') + (murder == 'C') + (murder == 'D') + (murder != 'D')) == 3)
			printf("murder is :%c", murder);
		}
	}
	system("pause");
	return 0;
}