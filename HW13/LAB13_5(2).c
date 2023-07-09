#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int rBinary[8], i, num, binary[8], j;

	printf("Enter ¾ç¼ö<256>:");
	scanf("%d", &num);

	i = 0;
	while (num > 0)
	{
		rBinary[i] = num % 2;
		num /= 2;
		i++;
	}
	for (j = 0; j < i; j++)
	{
		binary[j] = rBinary[i - 1 - j];
		printf("%d", binary[j]);
	}
	printf("\n");
}