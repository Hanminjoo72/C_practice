//20210820 �ѹ��� ��ǻ���а�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int incomes[12] = { 11 , 22 , 33 , 44 , 55 , 66 };
	int i, income, month = 0, flag = 0;

	printf("Ž���� ������? ");
	scanf("%d", &income);

	for (i = 0; i < 12; i++)
	{
		if (income == incomes[i])
		{		
			flag = 1;
			break;
		}		
	}
	if (flag)
		printf("���� %d�� ���� ù��° ���� %d���Դϴ�\n\n", income, i + 1);
	else
		printf("���� %d�� ���� ���� �����ϴ�\n\n", income);
}