//20210820 �ѹ��� ��ǻ���а�
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main(void)
{
	int i, num, sum = 0;

	i = 1;
	while (i <= 5)
	{
		do
		{
			printf("0���� ū ���� �Է�(%d��°):",i);
			scanf("%d", &num);
			do {
				if (num <= 0) {
					printf("�Է��� �߸��Ǿ����ϴ�. 0���� ū ���� �ٽ� �Է�<%d��°> : ", i);
					scanf("%d", &num);
				}
			} while (num <= 0);
		} while (num <= 0);

		sum += num;
		i++;
	}

	printf("�Էµ� ���� �� ��: %d\n", sum);
}