//20210820 컴퓨터학과 한민주
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main(void)
{
	int plus;
	do
	{
		printf("Enter a number(양수) : ");
		scanf("%d", &plus);

	} while (plus < 0);

	printf("입력된 양수는 %d", plus);
}