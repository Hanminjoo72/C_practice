//20210820 컴퓨터학과 한민주
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main(void)
{
	int n, m , nn = 1;

	printf("Enter two numbers:");
	scanf("%d %d" , &n,&m);

	printf("1 ");
	while (nn * n <= m)
	{
		nn *= n;
		printf("%d " , nn);
	}
}