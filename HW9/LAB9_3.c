//20210820 한민주 컴퓨터학과
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main(void)
{
	int score , total;
	score = 0;
	total = 0; 

	while (score != -1)
	{
		total += score;
		printf("Enter a score(-1 for exit) : ");
		scanf("%d", &score);
	
	}
	printf("The total is %d.\n", total);
}