//20210820 컴퓨터학과 한민주
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i;
	int number, data[20];

	printf("Enter a number:");
	scanf("%d",  &number);

	for (i = 0; i < 20; i++)
		data[i] = number * (i+1);

	for (i = 0; i < 20; i++)
	{
		printf("%5d ", data[i]);
		if (i % 5 == 4)
			printf("\n");
	}
	printf("\n");
}