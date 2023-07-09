//20210820 한민주 컴퓨터학과
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main(void)
{
	int i, num, sum = 0;

	i = 1;
	while (i <= 5)
	{
		do
		{
			printf("0보다 큰 수를 입력(%d번째):",i);
			scanf("%d", &num);
			do {
				if (num <= 0) {
					printf("입력이 잘못되었습니다. 0보다 큰 수를 다시 입력<%d번째> : ", i);
					scanf("%d", &num);
				}
			} while (num <= 0);
		} while (num <= 0);

		sum += num;
		i++;
	}

	printf("입력된 값의 총 합: %d\n", sum);
}