//20210820 ��ǻ���а� �ѹ���
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main(void)
{
	int num, i, sum, result;
	result = 1;
	sum = 0;

	printf("Enter a number : ");
	scanf("%d", &num);

	i = 1;
	while (i <= num)
	{
		sum += 3;
		i++;
	}
		printf("3�� %d�� ���� ���� %d�̴�\n", num, sum);	
    i = 1;
	while (i <= num)
	{
		result *= 3;
		i++;
	}
		printf("3�� %d�� ���� ���� %d�̴�\n", num, result);
}