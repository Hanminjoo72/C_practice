//20210820 컴퓨터학과 한민주
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int data[10];
	int i, sum = 0;

	srand(time(NULL));

	for (i = 0; i < 10; i++)
		data[i] = rand() % 100;

	for (i = 0; i < 10; i++)
		sum += data[i];

	printf("평균은 %d\n", sum / 10);
	for (i = 0; i < 10; i++)
		printf("%d ", data[i]);
	printf("\n");

	return 0;
}