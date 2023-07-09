//20210820 한민주 컴퓨터학과
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int score , max , count , total , best;
	double average;

	total = 0;
	count = 1;
	best = 0;
	average = 0;

	printf("Enter a score(-1 for exit) : ");
	scanf("%d", &score);
	
	if (score == -1)
	{
      printf("You've entered 0 students.\nThere is no data.\n");
	}
	else
	{
		while (score != -1)
		{
			average = total / count;

			total += score;

			printf("Enter a score(-1 for exit) : ");
			scanf("%d", &score);

			if (score > best)
			{
				best = score;
			}
			if (score != -1)
			{
				count++;
			}

		}

	}			
	printf("You've entered %d students.\n", count);
	printf("The total is %d\n", total);
	printf("The average is %.1f\n", (double)total / count);
	printf("The best score is %d", best);

}