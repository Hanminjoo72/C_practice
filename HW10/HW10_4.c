//20210820 ��ǻ���а� �ѹ���
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void printSumMTon(int m , int n);
int main(void)
{
	int m, n;

	printf("Enter two numbers : ");
	scanf("%d %d", &m, &n);

	printSumMTon(m, n);
}
void printSumMTon(int m, int n)
{
	int i ,total = 0;

	for (i = m; i <= n; i++)
		total += i;
	printf("%d ~ %d�� ��: %d\n", m, n, total);
}