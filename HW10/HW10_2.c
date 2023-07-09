//20210820 컴퓨터학과 한민주
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
void findNPrintBiggest(int num1, int num2, int num3);
int main(void)
{
	int num1, num2, num3;

	printf("Enter three numbers : ");
	scanf("%d %d %d", &num1, &num2, &num3);

	findNPrintBiggest(num1, num2, num3);
}
void findNPrintBiggest(int a, int b, int c)
{
	int big;

	if (a > b && a > c)
		big = a;
	else if (b > a && b > c)
		big = b;
	else
		big = c;

	printf("The Biggest number is %d.\n", big);
}