//20210820 컴퓨터학과 한민주
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num, scores[40];
	int i, total = 0, average;

	printf("Enter the number of scores:(<40) ");
	scanf("%d", &num);

	for (i = 0; i < num; i++)
	{
		printf("Enter a score: ");
		scanf("%d", &scores[i]);
		total += scores[i];
	}
	if (num == 0)
		average = 0;
	else
		average = total / num;

	printf("-----------------------------\n");
	printf("Total : %d\n", total);
	printf("Average : %d\n", average);

	for (i = 0; i < num; i++)
		printf("%d ", scores[i]);
	printf("\n");
}