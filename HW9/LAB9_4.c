//20210820 ��ǻ���а� �ѹ���
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main(void)
{
	int plus;
	do
	{
		printf("Enter a number(���) : ");
		scanf("%d", &plus);

	} while (plus < 0);

	printf("�Էµ� ����� %d", plus);
}