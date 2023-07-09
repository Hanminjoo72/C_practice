//20210820 컴퓨터학과 한민주
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
		printf("3을 %d번 더한 값은 %d이다\n", num, sum);	
    i = 1;
	while (i <= num)
	{
		result *= 3;
		i++;
	}
		printf("3을 %d번 곱한 값은 %d이다\n", num, result);
}