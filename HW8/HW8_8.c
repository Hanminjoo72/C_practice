//20210820 컴퓨터학과 한민주
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main(void)
{
	int  n, i;

	scanf("%d", &n);

	for (i = 2; i < n; i++) {
		if (n % i == 0)
		{
			break;
		}
	}
	if (i == n) 
		printf("소수이다");
	else
		printf("소수가 아니다");
}