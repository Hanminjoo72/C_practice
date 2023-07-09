//20210820 컴퓨터학과 한민주
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void printFibo(int n);
int main(void)
{
	int num, i;

	printf("몇개의 피보나치 수열값을 출력할까요?(3보다 큰 정수) : ");
	scanf("%d", &num);

	for (i = 1; i <= num; i++)
		printFibo(i);
	printf("\n");
}
void printFibo(int n)
{
	int f1 = 1, f2 = 1, f3 = 0, j;
	if (n == 1 || n == 2)
		printf("%d ", f1);
	else {
		for (j = 3; j <= n; j++)
		{
			f3 = f1 + f2;
			f1 = f2;
			f2 = f3;
		}
		printf("%d ", f3);
	}
}