//20210820 ��ǻ���а� �ѹ���
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main(void)
{
	int i = 1 , j;

	while (i <= 9)
	{
		j = 1;
		while (j <= 4)
		{
			printf("%d * %d = %d\t", i, j * 2, i * (j * 2));
			j++;
		}
		printf("\n");
		i++;
	}
}