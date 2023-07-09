//20210820 컴퓨터학과 한민주
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void generateData(int[], int);
void printData(int[], int);
int averageData(int[], int);
int maxData(int[], int); // 여기에 보이는 원형들처럼 매개변수의 이름을 생략할 수도 있다!
int main(void)
{
	int data[10]; // 계산 수행에 사용할 정적 변수
	int average , max;
	srand(time(NULL));
	generateData(data, 10);
	
	printf("엘리먼트들은 ");
	printData(data, 10);
	
	average = averageData(data, 10);
	printf("엘리먼트의 평균은 %d\n", average);
	
	max = maxData(data, 10);
	printf("엘리먼트들 중 가장 큰 수는 %d\n", max);
}
void generateData(int a0[], int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		a0[i] = rand() % 100;
	}
}
void printData(int a2[], int size)
{
	int i;
	for (i = 0; i < size; i++) // Index 0..9까지
		printf("%d ", a2[i]);
	printf("\n");
}
int averageData(int a1[], int size)
{
	int i, total = 0 , average;

	for (i = 0; i < size; i++)
	{
		total += a1[i];
	}
	average = total / size;
	return average;
}
int maxData(int a3[], int size)
{
	int i, best = a3[0];
	for (i = 0; i < size; i++) // Index 0..9까지
		if (best < a3[i])
			best = a3[i];
	return best;
}