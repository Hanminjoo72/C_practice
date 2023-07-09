//20210820 컴퓨터학과 한민주
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main(void)
{
	int n, j , i , k;
	printf("Enter a number : ");
	scanf("%d", &n);

	for (i = n; i >= 1; i--) {
		for (k = 0; k < n - i; k++)
			printf(" ");
		for (j = i; j >= 1; j--)
			printf("*");
		printf("\n");
	}
}