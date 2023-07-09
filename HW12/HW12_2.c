//20210820 컴퓨터학과 한민주
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int i, data[100], total, average, num;
	srand(time(NULL));
	total = 0;

	printf("Enter the number of random numbers:<<=100>:");
	scanf("%d", &num);

	for (i = 0; i < num; i++)
	{
		data[i] = rand() % 100;
		total += data[i];
	}
	
	average = total / i;

	printf("난수의 평균은 %d\n", average);
	printf("발생된 난수는\n");
	for (i = 0; i < num; i++) {
		printf("%5d", data[i]);
		if (i % 5 == 4)
			printf("\n");
	}
}