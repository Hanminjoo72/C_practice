//20210820 컴퓨터학과 한민주
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main(void)
{
	int i, num, score, max, min;
	max = -1; min = 999; score = 0;

	printf("Enter the number of scores : ");
	scanf("%d", &num);

	for (i = 1; i <= num; i++){
		printf("Enter a score :");
		scanf("%d", &score);

		if (max < score)
			max = score;
		if (min > score)
			min = score;
	}
	if (num > 0)
	{
		printf("The best score is %d\n", max);
		printf("The worst score is %d\n", min);
	}		
	else if (num == 0)
		printf("no data");
}