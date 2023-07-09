//20210820 컴퓨터학과 한민주
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main(void)
{
	int num, binary  , sum = 0;

	printf("Enter a number : ");
	scanf("%d", &num);

	while (num != 0)
	{
		binary = num % 2;
		num = num / 2;
		printf("%d", binary); 
	}
}