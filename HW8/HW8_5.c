//20210820 컴퓨터학과 한민주
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main(void)
{
	int num, i, sum = 1;

	printf("Enter a number(>=2) : ");
	scanf("%d", &num);

	printf("%d! = ", num);

	for (i = num; i > 1; i--)
	{
		printf("%d * ", i);
		sum *= i;
	}
	printf("1 = %d\n", sum);
}