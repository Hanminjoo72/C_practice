//20210820 컴퓨터학과 한민주
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main(void)
{
	int i, j;

	for (i = 1; i < 10; i++)
	{
		for (j = 1; j < 5; j++)
		{
			printf("%d * %d = %d\t", i, j * 2, (i * j * 2));
		}
		printf("\n");
	}
}