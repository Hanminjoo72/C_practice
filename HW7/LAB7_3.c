//20210820 ��ǻ���а� �ѹ���
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main(void)
{
	int i , num, result;
	i = 1;
	
	printf("Enter a number : ");
	scanf("%d", &num);

	while (i <= num)
	{
		result = i * i * i;
		i++;
		printf("%d\n", result);
	}
}