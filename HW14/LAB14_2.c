//20210820 컴퓨터학과 한민주
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void printArray(int a[], int size);
void reverse(int a[], int size);
int main(void)
{
	int num , i;
	int list[10];

	printf("Enter the number(<=10)");
	scanf("%d", &num);

	for (i = 0; i < num; i++)
	{
		printf("Enter 원소값:");
		scanf("%d", &list[i]);
	}
	printArray(list, num);
	reverse(list, num);
	printArray(list, num);
}
void printArray(int a[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", a[i]);
	printf("\n");
}
void reverse(int a[], int size)
{
	int j, temp;

	for (j = 0; j < size / 2; j++)
	{
		temp = a[j];
		a[j] = a[size - 1 - j];
		a[size - 1 - j] = temp;
	}
}