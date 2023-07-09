//20210820 컴퓨터학과 한민주
#define _CRT_SECURE_NO_WARNINGS

//20210820 컴퓨터학과 한민주
#include<stdio.h>
int main(void)
{
	int score , i = 1 , num;
	int total = 0;

	printf("Enter a student number : ");
	scanf("%d", &num);

	while (i <= num)
	{
		printf("Enter a score : ");
		scanf("%d", &score);

        total += score;
		i++;
	}
	printf("The total is %d\n", total);
}