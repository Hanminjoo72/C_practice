//20210820 컴퓨터학과 한민주
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, total = 0, best = 0 , incomes[7] , bestIndex;
	double average;

	for (i = 0; i < 7; i++)
	{
		printf("Enter the income of day %d : ", i + 1);
		scanf("%d", &incomes[i]);
	}
	printf("------------------------\n");	
	for (i = 0; i < 7; i++)
	{
		if (incomes[i] > best) {
			best = incomes[i];
			bestIndex = i + 1;
		}
	}
	printf("The best income : %d in day %d\n", best, bestIndex);
	printf("------------------------\n");
	for (i = 0; i < 7; i++)
	{
		total += incomes[i];
	}
	printf("The total is %d\n", total);

	average = (double) total / i;

	printf("The average is %.1f\n", average);
	printf("The good days and their incomes are\n");
	for (i = 0; i < 7; i++)
		if (incomes[i] > average) {
			printf("day %d: %d\n", i + 1, incomes[i]);
		}
}