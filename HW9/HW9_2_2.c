//20210820 한민주 컴퓨터학과
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main(void)
{
	int score, max, total, best, count;
	double average;

	total = 0;
	count = 0;
	best = 0;
	average = 0;

	while (1)
	{
		average = (double)total / (count);

		printf("Enter a score(-1 for exit) : ");
		scanf("%d", &score);

		if (score == -1)
		{
			break;
		}
		total += score;
		if (score > best)
		{
			best = score;
		}
		if (score != -1)
		{
			count++;
		}

	}
	printf("You've entered %d students.\n", count);
	if (count != 0) {
		printf("The total is %d\n", total);
		printf("The average is %.1f\n", average);
		printf("The best score is %d", best);
	}
	else if (count == 0) {
		printf("There is no data.\n", total);
	}
}