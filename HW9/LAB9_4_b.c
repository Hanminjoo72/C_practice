//20210820 한민주 컴퓨터학과
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, number, sum = 0;

	i = 1;
	while (i <= 5)
	{
		printf("0보다 큰 수를 입력(%d번째):", i);
		scanf("%d", &number);

		while (number <= 0)
		{
			printf("0보다 큰 수를 입력(%d번째):", i);
			scanf("%d", &number);
		}

		sum += number;
		i++;
	}
	printf("입력된 값의 총 합: %d\n", sum);
}