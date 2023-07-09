//20210820 컴퓨터학과 한민주
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main(void)
{
	int n , num , reverse , i;
	
	printf("Enter a number:");
	scanf("%d", &n);

	while ( n != 0)
	{
		printf("%d", n % 10);
		n /= 10;
	}
}