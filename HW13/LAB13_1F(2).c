//20210820 ��ǻ���а� �ѹ���
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 3
#include <stdlib.h>
#include <time.h>
#include<stdio.h>
void printArray(int a[], int size);
int equalArray(int a[], int b[], int size);
void generateArray(int a[], int size);
int main(void)
{
	int arrayA[SIZE], arrayB[SIZE];
	int count = 0;
	srand(time(NULL));
	do
	{
		printf("\n%d ��° �õ�\n", ++count);
		generateArray(arrayA, SIZE);
		generateArray(arrayB, SIZE);
		printf("ArrayA:");
		printArray(arrayA, SIZE);
		printf("ArrayB:");
		printArray(arrayB, SIZE);
	} while (!(equalArray(arrayA, arrayB, SIZE)));
}
void generateArray(int a[], int size)
{
	for (int i = 0; i < SIZE; i++)
		a[i] = rand() % 2;
}
void printArray(int a[], int size)
{
	for (int i = 0; i < size; i++)
		printf("%d", a[i]);
	printf("\n");
}
int equalArray(int a[], int b[], int size)
{
	for (int i = 0; i < size; i++)
		if (a[i] != b[i])
			return 0;
	return 1;
}