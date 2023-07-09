//20210820 한민주 컴퓨터학과
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int binary[8], i = 0, k, num;

	printf("Enter 양수(<256):");
	scanf("%d", &num);

	while (num > 0)
	{
		binary[i] = num % 2;
		num /= 2;
		i++;
	}
	//i = 4
	//1101
	for (k = i - 1; k >= 0; k--)
		printf("%d", binary[k]);
	printf("\n");
}