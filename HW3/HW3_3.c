// ��ǻ���а� 20210820 �ѹ��� 
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