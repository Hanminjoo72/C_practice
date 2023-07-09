//20210820 컴퓨터학과 한민주
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main(void)
{
	int num, i, sum, correct;
	correct = 0;

	printf("몇 단을 연습하시겠습니까? : ");
	scanf("%d", &num);

	for (i = 1; i < 10; i++)
	{
		printf("%d * %d = ", num, i);
		scanf("%d", &sum);

		if (sum == num * i)
		{
			correct++;
		}
	}
	printf("%d단의 구구단에서 %d개를 맞았습니다", num, correct);
}
