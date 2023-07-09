// 컴퓨터학과 20210820 한민주 
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int totalminute, hour, minute;

	printf("Enter hour : ");
	scanf("%d", &hour);
	printf("Enter minute : ");
	scanf("%d", &minute);

	printf("Total %d minutes", hour * 60 + minute);
}

