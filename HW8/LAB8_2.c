//20210820 컴퓨터학과 한민주
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main(void)
{
	int num, i;

	printf("Enter a number : ");
	scanf("%d", &num);

	for (i = 1; i < 10; i++)
		printf("%d * %d = %d\n", num, i, num * i);		
}