//20210820 컴퓨터학과 한민주
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main(void)
{
	int n, i, num = 0, even = 0 ;

	printf("Enter the # of integers : ");
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		printf("Enter an integer : ");
		scanf("%d", &num);

		if (num % 2 == 0)
			even++;
	}
	printf("The number of even numbers is %d", even);
}