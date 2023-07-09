//20210820 컴퓨터학과 한민주
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void printManyStars(int starNum);

int main()
{
	int ts, ms;

	printf("Tom's score? ");
	scanf("%d", &ts);
	printf("Mary's score? ");
	scanf("%d", &ms);

	printf("---------- Score Histogram ----------\n");
	printf("Tom\t:");
	printManyStars(ts);
	printf("Mary\t:");
	printManyStars(ms);
}
void printManyStars(int starNum)
{
	int i;

	for (i = 0; i < starNum; i++)
	{
		printf("*");
	}
	printf("<%02d>\n", starNum);
	return;
}