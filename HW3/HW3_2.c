// 컴퓨터학과 20210820 한민주 
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
 int second, minute, hour, totalsecond;

 printf("Enter the total seconds : ");
 scanf("%d", &totalsecond);

 hour = totalsecond / 3600;
 minute = totalsecond % 3600 / 60;
 second = totalsecond % 3600 % 60;

 printf("---Calculation Result---\n");
 printf("%d seconds\n", totalsecond);
 printf("%dh %dm %ds", hour, minute, second);
 }