//20210820 ��ǻ���а� �ѹ���
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main(void)
{
	int i = 1 , num, result = 1;

	printf("Enter a number : ");
	scanf("%d", &num);

	while (i <= num)
	{
		result *= i;
		i++;
	}
	printf("%d�� Factorial ���� %d�̴�.", num , result);
	
}