//20210820 �ѹ��� ��ǻ���а�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, number, sum = 0;

	i = 1;
	while (i <= 5)
	{
		printf("0���� ū ���� �Է�(%d��°):", i);
		scanf("%d", &number);

		while (number <= 0)
		{
			printf("0���� ū ���� �Է�(%d��°):", i);
			scanf("%d", &number);
		}

		sum += number;
		i++;
	}
	printf("�Էµ� ���� �� ��: %d\n", sum);
}