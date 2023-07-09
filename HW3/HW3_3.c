// 컴퓨터학과 20210820 한민주 
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int second, minute, hour, totalsecond;

	printf("Enter h m s : ");
	scanf("%d %d %d", &hour, &minute, &second);

	totalsecond = 3600 * hour + 60 * minute + second;

	printf("---Calculation Result---\n");
	printf("Total %d seconds", totalsecond);
}