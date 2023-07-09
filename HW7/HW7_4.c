//20210820 컴퓨터학과 한민주
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main(void)
{
	int num, i = 1 , score, total = 0;
	double average;

	printf("Enter a student number : ");
	scanf("%d", &num);

	while (i <= num)
	{
		printf("Enter a score : ");
		scanf("%d", &score);
		total += score;
		i++;
	}
	average = (double)total / num;
	if (num == 0)
		average = 0;
	printf("The total is %d\n", total);
	printf("The average is %.1f\n", average);
}