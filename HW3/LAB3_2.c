// ��ǻ���а� 20210820 �ѹ��� 
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int totalminute , minute , hour;

	printf("Enter the total minutes : ");
	scanf("%d", &totalminute);

	hour = totalminute / 60;
	minute = totalminute % 60;

	printf("%d minutes\n", totalminute);
	printf("%dh %dm\n", hour, minute);
}