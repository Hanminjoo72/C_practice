//20210820 ��ǻ���а� �ѹ���
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main(void)
{
	int k, n, result;
	result = 1;

	printf("Enter a number : ");
	scanf("%d", &n);

	for (k = 0; result <= n; k++)
	{
		result = result * 2;
	}
	printf("%d", k - 1);
}