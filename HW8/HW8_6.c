//20210820 컴퓨터학과 한민주
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main(void)
{
	long long num, i, factorial;

	factorial = 1;

	printf("Enter a number : ");
	scanf("%lld", &num);

	for (i = 1; i <= num; i++)
	{
		factorial *= i;
		printf("%lld! = %lld\n", i, factorial);
	}
}