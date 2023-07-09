//20210820 컴퓨터학과 한민주
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
	printf("%d의 Factorial 값은 %d이다.", num , result);
	
}