//20210820 ��ǻ���а� �ѹ���
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main(void)
{
	int num, i, sum, correct;
	correct = 0;

	printf("�� ���� �����Ͻðڽ��ϱ�? : ");
	scanf("%d", &num);

	for (i = 1; i < 10; i++)
	{
		printf("%d * %d = ", num, i);
		scanf("%d", &sum);

		if (sum == num * i)
		{
			correct++;
		}
	}
	printf("%d���� �����ܿ��� %d���� �¾ҽ��ϴ�", num, correct);
}
