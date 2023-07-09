#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main(void)
{
	int n, unit, i;
	int sum;

	scanf("%d %d", &n, &unit);

	sum = 0;
	for (i = 1; i <= n; i++)
	{
		sum += i;
		if (i % unit == 0)
		{
			printf("%d ", sum);
			sum = 0;
		}
	}
}